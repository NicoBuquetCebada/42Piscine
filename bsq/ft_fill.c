/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumartin <lumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:45:09 by lumartin          #+#    #+#             */
/*   Updated: 2024/07/23 13:54:18 by lumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_fill(char **map, int *start, int size, char *key)
{
    int i;
    int j;
    
    i = start[0];
    while (i < start[0] + size)
    {
        j = start[1];
        while (j < start[1] + size)
        {
            map[i][j] = key[2];
            j++;
        }
        i++;
    }
    return (1);
}
