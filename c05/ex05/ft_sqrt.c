/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:16:33 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/25 02:03:34 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
		int		n;
	char	c;
	
	if (nb <= 0)
		return (0);
	n = 1;
	while (nb / n != n && n <= nb)
		n++;
	if (nb % n != 0)
		return (0);
	else
		return (n);
}

int	main(void)
{
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(145));
}
