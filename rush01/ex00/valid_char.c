/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmallaup <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:23:06 by cmallaup          #+#    #+#             */
/*   Updated: 2024/07/14 19:58:21 by cmallaup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	can_be_solve(char *str)
{
	int	solve;
	int	i;

	solve = 0;
	i = 0;
	while (str[i])
	{
		if (i == 3 || i == 11)
			i = i + 5;
		else if (
			!((str[i] - 48) + (str[i + 4] - 48) >= 3
				&& (str[i] - 48) + (str[i + 4] - 48) <= 5)
		)
		{
			solve = 0;
			break ;
		}
		else
			solve = 1;
		i++;
	}
	return (solve);
}

char	*no_spaces(char *str)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(sizeof (char) * 16);
	while (str[i])
	{
		if (i % 2 == 0)
			c[i / 2] = str[i];
		i++;
	}
	return (c);
}

int	get_size(char *c)
{
	int	size;

	size = 0;
	while (*c != '\0')
	{
		size++;
		c++;
	}
	return (size);
}

/**
* is_string_valid - check if cad is valid to be solve, 1 if it's okey, 0 if not
**/
int	is_string_valid(char *c)
{
	int	is_valid;
	int	size;
	int	i;

	is_valid = 0;
	size = get_size(c);
	i = -1;
	if (size == 31)
	{
		while (++i <= size - 1)
		{
			if (
				(i % 2 != 0 && *c == 32)
				|| (i % 2 == 0 && *c >= '1' && *c <= '4')
			)
				is_valid = 1;
			else
			{
				is_valid = 0;
				break ;
			}
			c++;
		}
	}
	return (is_valid);
}
