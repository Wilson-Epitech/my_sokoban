/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** main
*/

#include "include/lib.h"

int main(int ac, char **av)
{
    char c = 0;

    if (ac != 2) {
        return 84;
    }
    struct stat sb;
    stat(av[1], &sb);
    char *buff = malloc((sizeof(char)) * (sb.st_size));
    int fd = open(av[1], O_RDONLY);
    read(fd, buff, sb.st_size);
    initscr();
    while (c != 32) {
        printw("%s\n", buff);
        refresh();
        c = getch();
        dprintf(2, "%c\n", c);
        clear();
    }
    endwin();
    return 0;
}
