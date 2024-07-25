/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:42:43 by guigonza          #+#    #+#             */
/*   Updated: 2024/07/21 23:35:05 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rdict(char	*dict);
void	rush(char *dict, char *src);

int	main(int argc, char	**argv)
{
	char	*dict;
	int		i;

	i = 0;
	if (argc < 2 || argc > 3)
	{
		write(1, "ERROR\n", 6);
		return (1);
	}
	if (argc == 2)
	{
		dict = ft_rdict("numbers.dict");
		while (argv[1][i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				write(2, "PARAM ERROR\n", 12);
				return (1);
			}
			i++;
		}
		rush(dict, argv[1]);
	}
	else if (argc == 3)
	{
		dict = ft_rdict(argv[1]);
		while (argv[2][i])
		{
			if (argv[2][i] < '0' || argv[2][i] > '9')
			{
				write(2, "PARAM ERROR\n", 12);
				return (1);
			}
			i++;
		}
		rush(dict, argv[2]);
	}
}
