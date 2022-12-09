/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** struct
*/

#include "lib.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct PLAYER_POS{
        int x;
        int y;
    } PLAYER_POS_T;

    typedef struct ARRAY_STRUCT {
        char *buff;
        char **array;
    } ARRAY_STRUCT_T;

    typedef struct GAME {
        ARRAY_STRUCT_T array;
        PLAYER_POS_T player_pos_values;
    } GAME_T;

#endif /* !STRUCT_H_ */
