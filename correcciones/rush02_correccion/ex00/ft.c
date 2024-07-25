/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 22:16:23 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/23 17:54:39 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_trim(char *str)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			j++;
		i++;
	}
	dst = (char *)malloc (sizeof(char) + j + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			dst[j] = str[i];
			j++;
		}
		i++;
	}
	return (dst);
}