/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** key_down
*/

#include "../../include/lib.h"

void key_down(GAME_T *ALL, PLAYER_POS_T *pos)
{
if ((ALL->array.array[pos->x + 1][pos->y] == ' ')
|| (ALL->array.array[pos->x + 1][pos->y] == 'O')) {
    ALL->array.array[pos->x][pos->y] = ' ';
    pos->x = pos->x + 1;
    ALL->array.array[pos->x][pos->y] = 'P';
    printw(" x: %d y : %d\n", pos->x, pos->y);
    return;
}
if (ALL->array.array[pos->x + 1][pos->y] == 'X'
&& ALL->array.array[pos->x + 2][pos->y] != '#') {
    ALL->array.array[pos->x][pos->y] = ' ';
    ALL->array.array[pos->x + 1][pos->y] = 'P';
    ALL->array.array[pos->x + 2][pos->y] = 'X';
    pos->x = pos->x + 1;
    return;
}
}
