#include <stdio.h>
#include <stdlib.h>

#define COPOS 0x100

struct TCopo {
    double x;
    double y;

};

int main(int argv, char *argv[]) {
    int max_y, max_x;

    struct TCopo copo[COPOS];

    initscr();
    cur_set(false);
    getmaxyx(stdscr, max_y, max_x)
    inizializar(copo);

    cur_set(true);
    endwin();

    return EXIT_SUCCESS;

}
