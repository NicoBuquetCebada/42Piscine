/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 04:13:59 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/11 14:20:34 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				o;

	j = 0;
	i = ft_strlen(dest);
	o = i;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	while (i < size)
		dest[++i] = '\0';
	i = o + ft_strlen(src);
	return (i);
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
	printf("%d | %s",ft_strlcat(str, "que", 10), str);
}*/