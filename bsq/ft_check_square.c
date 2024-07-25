/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumartin <lumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:08:58 by lumartin          #+#    #+#             */
/*   Updated: 2024/07/23 13:55:24 by lumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_check_obstacule(char **map, char obstacule, char* start, char* end)
{
    int i;
    int j;

    i = start[0];
    while (i < end[0] + 1)
    {
        j = start[1];
        while (j < end[1] + 1)
        {
            if (map[i][j] == obstacule)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int ft_check_square(char **map, int *cord, int max_i, char* key)
{
    int size;
    int best;
    int end_i;
    int end_j;
    int i;
    int j;

    i = cord[0];
    j = cord[1];
    size = 1;
    best = 1;
    while (map[i][j + size] != '\0' && i + size < max_i)
    {
        end_i = i + size;
        end_j = j + size;
        if (ft_check_obstacule(map, key[1], (char[2]){i, j}, (char[2]){end_i, end_j}) == 0)
            return (best);
        size++;
        best = size;
    }
    return (best - 1);
}
