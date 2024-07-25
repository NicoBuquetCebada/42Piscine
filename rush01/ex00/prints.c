/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmallaup <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 19:39:51 by cmallaup          #+#    #+#             */
/*   Updated: 2024/07/14 20:08:12 by cmallaup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_error(void)
{
	write(1, "Error", 5);
	write(1, "\n", 1);
}

void	print_matrix(char *p[])
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		while (++j < 4)
		{
			write(1, &p[i][j], 1);
			if (j != 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		j = -1;
	}
}
