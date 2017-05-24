#include <time.h>
#include <ncurses.h>

int main () {

struct timespec intervallo;
intervallo.tv_sec = 0;
intervallo.tv_nsec = 700 * 1000 * 1000;

initscr();

curs_set(0);

mvaddstr(15, 4, "Hello World!");
nanosleep(&intervallo, NULL);
refresh();
mvaddstr(10, 20, "How are you?");
nanosleep(&intervallo, NULL);
refresh();
mvaddstr(5, 4, "I'm Ok");
nanosleep(&intervallo, NULL);
refresh();

getch();
endwin();
return 0;
} 
