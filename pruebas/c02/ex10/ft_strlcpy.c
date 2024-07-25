/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:28:17 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/13 16:48:28 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				l;

	i = 0;
	while (src[i])
		i++;
	l = i;
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (l);
}

/*int	main(void)
{
	char	dest[4];

	printf("Length: %d | %s\n", ft_strlcpy(dest, "Hola", 5), dest);
}*/