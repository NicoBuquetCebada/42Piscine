/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 01:06:42 by nico              #+#    #+#             */
/*   Updated: 2024/07/17 13:59:17 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	while (++i <= argc / 2)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			t = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t;
		}
	}
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
