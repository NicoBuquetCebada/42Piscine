/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_best.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumartin <lumartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:10:43 by lumartin          #+#    #+#             */
/*   Updated: 2024/07/23 13:54:25 by lumartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

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

int *ft_find_best(char **map, char* key, int size) // key = [. , o , x]
{
    int i;
    int j;
    int *best;

    i = 0;
    j = 0;
    best = malloc(sizeof(int) * 3);
    while (i < size)
    {
        j = 0;
        while (map[i][j] != '\0')
        {
            if (map[i][j] == key[0])
            {
                if (ft_check_square(map, (int[2]){i,j}, size, key) > best[2])
                {
                    best[2] = ft_check_square(map, (int[2]){i,j}, size, key);
                    best[0] = i;
                    best[1] = j;

                }
            }
            j++;
        }
        i++;
    }
    return (best);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char **map;
    char key[3] = {'.', 'o', 'x'};
    int i;

    map = malloc(sizeof(char *) * 9);
    map[0] = malloc(sizeof(char) * 29);
    map[1] = malloc(sizeof(char) * 29);
    map[2] = malloc(sizeof(char) * 29);
    map[3] = malloc(sizeof(char) * 29);
    map[4] = malloc(sizeof(char) * 29);
    map[5] = malloc(sizeof(char) * 29);
    map[6] = malloc(sizeof(char) * 29);
    map[7] = malloc(sizeof(char) * 29);
    map[8] = malloc(sizeof(char) * 29);

    strcpy(map[0], "...........................");
    strcpy(map[1], "...........................");
    strcpy(map[2], "............o..............");
    strcpy(map[3], "...........................");
    strcpy(map[4], "..o........................");
    strcpy(map[5], "...........................");
    strcpy(map[6], "...........................");
    strcpy(map[7], "......o..............o.....");
    strcpy(map[8], "..o.......o................");
    
    
    int *best = ft_find_best(map, key, 9);
    ft_fill(map, best, best[2], key);
    i = 0;
    while (i < 3)
    {
        printf("%d\n", best[i]);
        i++;
    }
    i = 0;
    while(i < 9)
    {
        ft_putstr(map[i]);
        ft_putstr("\n");
        i++;
    }
    return (0);
}