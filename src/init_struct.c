/*
** MY_SOKOBAN PROJECT, 2022
** my_sokoban
** File description:
** init_struct
*/

#include "../include/lib.h"

void init_player_pos(GAME_T *ALL)
{
    ALL->player_pos_values.x = 0;
    ALL->player_pos_values.y = 0;
}

void init_array_struct(GAME_T *ALL, int ac, char **av)
{
    if (ac != 2) {
        exit(84);
    }
    struct stat sb;
    stat(av[1], &sb);
    ALL->array.buff = malloc((sizeof(char)) * (sb.st_size + 1));
    int fd = open(av[1], O_RDONLY);
    read(fd, ALL->array.buff, sb.st_size);
    ALL->array.buff[sb.st_size] = '\0';
    ALL->array.array = my_str_to_word_array(ALL->array.buff);
}

void init(GAME_T *ALL, int ac, char **av)
{
    init_player_pos(ALL);
    init_array_struct(ALL, ac, av);
}
