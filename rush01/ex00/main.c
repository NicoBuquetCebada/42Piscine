/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmallaup <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 07:49:54 by cmallaup          #+#    #+#             */
/*   Updated: 2024/07/14 19:55:18 by cmallaup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_error(void);
int		is_string_valid(char *cad);
void	rush(char *c);
char	*no_spaces(char *str);
int		can_be_solve(char *str);
void	print_matrix(char *p[]);

int	main(int argc, char *argv[])
{
	char	*p;
	int		i;

	if (!(argc == 2))
		print_error();
	else
	{
		p = &argv[1][0];
		if (is_string_valid(p) == 0)
			print_error();
		else
		{
			p = no_spaces(p);
			if (can_be_solve(p) == 0)
				print_error();
			else
				print_matrix(rush(p));
		}
	}
	return (0);
}
