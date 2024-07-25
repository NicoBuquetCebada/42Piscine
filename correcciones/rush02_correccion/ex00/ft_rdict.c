/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:56:51 by frivas            #+#    #+#             */
/*   Updated: 2024/07/23 18:34:11 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_rdict(char *dict)
{
	int		fd;
	char	c;
	char	*dst;
	int		i;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		char str[11] = "Dict Error\n";
		write(1, &str, 11);
		return (0);
	}
	i = 0;
	while (read(fd, &c, sizeof(c) != 0))
		i++;
	close(fd);
	fd = open(dict, O_RDONLY);
	dst = (char *)malloc(sizeof(char) * i + 1);
	// if(!dst)
	// 	gestion de errores
	read(fd, dst, i);
	close(fd);
	dst[i] = '\0';
	return (dst);




	char **str = malloc(sizeof(char *) * len + 1);
	int i = 0;
	while (str[i])
	{
		str[i] = malloc(sizeof(char) * len + 1);
		i++;
	}
}
