/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 23:11:11 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/11 11:52:50 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*int	main(void)
{
	char	dest[4];
	char	dest2[10];
	
	dest[0] = 'H';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = 'a';
	dest2[0] = 'H';
	dest2[1] = 'o';
	dest2[2] = 'l';
	dest2[3] = 'a';
	ft_strncat(dest, "Hola", 4);
	printf("%s\n", dest);

	strncat(dest2, "Hola", 4);
	printf("%s", dest2);
}*/