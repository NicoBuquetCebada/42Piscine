/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maparray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:13:38 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/24 16:46:04 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	**ft_maparray(char *map, char *key)
{
	int		i;
	int		c;
	int		r;
	char	**arr;

	i = 0;
	c = 0;
	r = 0;
	while (map[i++])
	{
		if (i < 4)
			key[i] = map[i];
		else if (r == 1 && map[i] != '\n')
			c++;
		else if (map[i] == '\n')
			r++;
	}
	arr = malloc(sizeof(char *) * (r + 1));
	i = 0;
	while (i < r)
	{
		arr[i] = malloc(sizeof(char) * (c + 1));
		arr[i++][c] = '\0';
	}
	i = 4;
	r = 0;
	c = 0;
	while (map[i++])
	{
		if (map[i] == '\n')
		{
			r++;
			c = 0;
		}
		else
			arr[r][c++] = map[i];
	}
	return (arr);
}

/*int	main(void)
{
	char	*key;
	char	**arr;
	key = malloc(sizeof(char *) * 4 + 1);
	arr = ft_maparray(ft_readmap("default.map"), key);
	
	while (*arr)
	{
		printf("%s\n", *arr);
		arr++;
	}
	key[4] = '\0';
}*/
