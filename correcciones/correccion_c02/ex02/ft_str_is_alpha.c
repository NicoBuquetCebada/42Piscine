/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:06:01 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/13 13:55:13 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		b;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		b = 0;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			b = 1;
		}
		if (b == 0)
			return (b);
		i++;
	}
	if (i == 0)
		return (1);
	return (b);
}

/*int	main(void)
{
	printf("%d",ft_str_is_alpha(""));
}*/