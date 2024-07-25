/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 04:13:59 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/18 13:44:28 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest [i] = '\0';
	return (j + ft_strlen(src));
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

/*int main(void)
{
	char	str[9];
	
	str[0] = 'H';
	str[1] = 'o';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = 'q';
	str[5] = 'u';
	str[6] = 'e';
	str[7] = 't';
	str[8] = 'a';
	printf("%d | %s",ft_strlcat(str, "sssss", 2), str);
	
	//printf("%d | %s", strlcat(str, "sssss", 2), str);
}*/