/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** keys
*/

#include "../../include/lib.h"

void keys(GAME_T *ALL, int ch)
{
    PLAYER_POS_T *pos = &(ALL->player_pos_values);
    keypad(stdscr, TRUE);
            switch (ch) {
                case KEY_UP:
                    key_up(ALL, pos);
                    break;
                case KEY_DOWN:
                    key_down(ALL, pos);
                    break;
                case KEY_LEFT:
                    key_left(ALL, pos);
                    break;
                case KEY_RIGHT:
                    key_right(ALL, pos);
                    break;
                }
}
