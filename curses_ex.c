/*
gcc curses_ex.c -lcurses
*/
#include <curses.h>

int main(int argc, char *argv[])
{
    initscr();
    clear();
    move(15, 20);
    printw("Test program: %s", argv[0]);
    refresh();
    getch();
    endwin();
    return 0;
}