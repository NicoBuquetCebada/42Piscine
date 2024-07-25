/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:17:21 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/25 17:37:00 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dst;
	int	i;

	if (min >= max)
		return (dst = 0);
	else
		dst = (int *)malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (i < (max - min))
	{
		dst[i] = min + i;
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	printf("%d%d%d%d%d\n", ft_range(5, 10)[0], ft_range(5, 10)[1], 
	ft_range(5, 10)[2], ft_range(5, 10)[3], ft_range(5, 10)[4]);
}*/