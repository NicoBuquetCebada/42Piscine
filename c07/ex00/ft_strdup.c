/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:07:22 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/25 17:18:14 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	i = 0;
	dst = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[ft_strlen(src)] = '\0';
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	printf("DST: %s\n", ft_strdup("Hola"));
}*/