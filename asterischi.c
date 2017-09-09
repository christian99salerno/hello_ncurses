#include <ncurses.h>
#include <time.h>

int main () {

struct timespec intervallo;
intervallo.tv_sec = 0;
intervallo.tv_nsec = 700 * 1000 * 1000;

initscr();

curs_set(0);
 
mvaddstr(3, 3, "*");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, " ");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, "*");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, " ");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, "*");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, " ");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, "*");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, " ");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, "*");
refresh();
nanosleep(&intervallo, NULL);
mvaddstr(3, 3, " ");
refresh();
nanosleep(&intervallo, NULL);

getch();

endwin();

return 0;
}
