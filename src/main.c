/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** main
*/

#include "../include/lib.h"

int find_p_position(GAME_T *ALL, int r, int s)
{
    if (ALL->array.array[r][s] == 'P') {
            ALL->player_pos_values.x = r;
            ALL->player_pos_values.y = s;
    }
}

int browse_array(GAME_T *ALL)
{
    for (int r = 0; ALL->array.array[r] != NULL; r++) {
        for (int s = 0; ALL->array.array[r][s] != '\0'; s++) {
            find_p_position(ALL, r, s);
        }
    }
    return 0;
}

int main(int ac, char **av)
{
    GAME_T ALL;
    init(&ALL, ac, av);
    char c = 0;
    int ch;

    error_handling(ac, av);
    initscr();
    noecho();
    browse_array(&ALL);
    while (c != 32) {
        keys(&ALL, ch);
        for (int x = 0; ALL.array.array[x] != NULL; x++) {
            mvprintw(x, 0, "%s\n", ALL.array.array[x]);
        }
        ch = getch();
        c = ch;
    }
    clear();
    endwin();
    return 0;
}
