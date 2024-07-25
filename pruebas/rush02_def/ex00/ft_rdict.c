/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rdict.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frivas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:56:51 by frivas            #+#    #+#             */
/*   Updated: 2024/07/21 20:39:54 by guigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_rdict(char *dict)
{
	int		fd;
	char	c;
	char	*dst;
	int		i;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	i = 0;
	while (read(fd, &c, sizeof(c) != 0))
		i++;
	close(fd);
	fd = open(dict, O_RDONLY);
	dst = (char *)malloc(i + 1);
	read(fd, dst, i);
	close(fd);
	dst[i] = '\0';
	return (dst);
}
