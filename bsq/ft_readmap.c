/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:59:48 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/23 19:11:47 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>

char	*ft_readmap(char *path)
{
	int		file;
	char	c;
	char	*dst;
	int		i;

	file = open(path, O_RDONLY);
	if (file == -1)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	i = 0;
	while (read(file, &c, sizeof(c) != 0))
		i++;
	close(file);
	dst = (char *)malloc(i + 1);
	read(open(path, O_RDONLY), dst, i);
	close(file);
	dst[i] = '\0';
	return (dst);
}
