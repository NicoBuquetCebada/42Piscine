/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maparray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 21:13:38 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/24 17:59:00 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "bsq.h"

int	*ft_atoi(char *str, int *n)
{
	int	i;

	i = -1;
	while (str[++i])
		n[0] = n[0] * 10 + str[i] - '0';
	return (n);
}

int	*ft_rows(char *map, int *n)
{
	int		i;
	int		l;
	char	*num;

	l = 0;
	i = -1;
	while (map[++i] && (map[i] >= '0' && map[i] <= '9'))
		l++;
	num = (char *)malloc(sizeof(char) * (l + 1));
	i = 0;
	while (i < l)
	{
		num[i] = map[i];
		i++;
	}
	num[l] = '\0';
	return (ft_atoi(num, n));
}

char	**ft_fillarrmap(char *map, char **arr, int i)
{
	int	r;
	int	c;

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

void	ft_arri(char **arr, int r, int c)
{
	int	i;

	arr = malloc(sizeof(char *) * (r + 1));
	i = 0;
	while (i < r)
	{
		arr[i] = malloc(sizeof(char) * (c + 1));
		arr[i++][c] = '\0';
	}
}

char	**ft_maparray(char *map, char *key, int *rows)
{
	int		i;
	int		c;
	int		r;
	char	**arr;
	int		j;

	rows = ft_rows(map, rows);
	i = -1;
	c = 0;
	r = 0;
	j = 0;
	while (map[++i])
	{
		if (r == 0 && !(map[i] >= '0' && map[i] <= '9') && map[i] != '\n')
			key[j++] = map[i];
		else if (r == 1 && map[i] != '\n')
			c++;
		else if (map[i] == '\n')
			r++;
	}
	ft_arri(arr, r, c);
	return (ft_fillarrmap(map, arr, 4));
}
