/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:01:47 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/18 13:40:16 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	int				len_src;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (size == 0)
		return (len_src);
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

unsigned int    ft_strlcpy2(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    i = 0;
    if (size == 0)
        return (ft_strlen(src));
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;
    len = 0;
    i = 0;
    while (dest[i] && i < size)
        i++;
    len = i;
    while (src[i - len] && i + 1 < size)
    {
        dest[i] = src[i - len];
        i++;
    }
    if (len < size)
        dest[i] = '\0';
    return (len + ft_strlen(src));
}

int	main(void)
{
	char	dest[4];

	printf("Length: %d | %s\n", ft_strlcpy(dest, "Hola", 4), dest);
}
