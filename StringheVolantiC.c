#include <time.h>
#include <ncurses.h>

int main () {

struct timespec intervallo;
intervallo.tv_sec = 0;
intervallo.tv_nsec = 700 * 1000 * 1000;

initscr();

curs_set(0);

mvaddstr(15, 4, "Hello World!");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(10, 20, "How are you?");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(5, 4, "I'm Ok");
refresh();
nanosleep(&intervallo, NULL);

getch();
endwin();
return 0;
} 
