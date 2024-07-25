/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:09:31 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/07 22:08:39 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	rush_while(int x, int y, int i, int j);

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	if (x < 1 || y < 1)
	{
		write(1, "ERROR INPUT LESS THAN 1", 23);
		return ;
	}
	while (i <= y)
	{
		j = 1;
		rush_while(x, y, i, j);
		i++;
	}
}

void	rush_while(int x, int y, int i, int j)
{
	while (j <= x)
	{
		if ((i == 1 || i == y) && (j == 1 || j == x))
			ft_putchar('o');
		if (((i == 1 || i == y) && (j > 1 && j < x)))
			ft_putchar('-');
		if ((i > 1 && i < y) && (j == 1 || j == x))
			ft_putchar('|');
		if ((i > 1 && i < y) && (j > 1 && j < x))
			ft_putchar(' ');
		j++;
	}
	ft_putchar('\n');
}
