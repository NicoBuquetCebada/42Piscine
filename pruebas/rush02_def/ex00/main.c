/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 20:42:43 by guigonza          #+#    #+#             */
/*   Updated: 2024/07/23 16:47:30 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rdict(char	*dict);
void	rush(char *dict, char *src);
int		ft_validparam(char **argv, int i);
int		ft_rushp(char **argv, int b, int i, char *dict);

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
		return (ft_rushp(argv, 1, i, dict));
	}
	else if (argc == 3)
	{
		dict = ft_rdict(argv[1]);
		return (ft_rushp(argv, 0, i, dict));
	}
}

int	ft_validparam(char **argv, int i)
{
	if (argv[1][i] < '0' || argv[1][i] > '9')
	{
		write(2, "PARAM ERROR\n", 12);
		return (1);
	}
	else
		return (0);
}

int	ft_rushp(char **argv, int b, int i, char *dict)
{
	if (b == 0)
	{
		dict = ft_rdict(argv[1]);
		while (argv[2][i])
		{
			if (ft_validparam(argv, i))
				return (1);
			i++;
		}
		rush(dict, argv[2]);
	}
	else
	{
		dict = ft_rdict("numbers.dict");
		while (argv[1][i])
		{
			if (ft_validparam(argv, i))
				return (1);
			i++;
		}
		rush(dict, argv[1]);
	}
	return (0);
}
