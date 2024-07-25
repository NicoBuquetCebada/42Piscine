/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:14:41 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/22 17:22:20 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isnum(char c);
int	ft_notvalid(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	num;

	n = 0;
	i = 0;
	num = 0;
	while (str[i] && !ft_notvalid(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] && ft_isnum(str[i]))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (n % 2 != 0)
		num *= -1;
	return (num);
}

int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_notvalid(char c)
{
	if (c != ' ' && c != '\n' && c != '\t'
		&& c != '\f' && c != '\r' && c != '\v')
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("%d\n", ft_atoi("2147483648")); 
	printf("%d\n", atoi("2147483648"));
}
