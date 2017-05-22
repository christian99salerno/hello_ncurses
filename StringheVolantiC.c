#include <stdio.h>
#include <time.h>
#include <ncurses.h>

int main () {

struct timespec intervallo;
intervallo.tv_sec = 3;
intervallo.tv_nsec = 700 / 1000;

initscr();

curs_set(0);

mvaddstr(15, 4, "Hello World!");
nanosleep(&intervallo, NULL);
mvaddstr(10, 20, "How are you?");
nanosleep(&intervallo, NULL);
mvaddstr(5, 4, "I'm Ok");

refresh();

getch();

endwin();

return 0;
} 
