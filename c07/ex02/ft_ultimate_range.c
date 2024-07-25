/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 17:37:40 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/25 17:50:47 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dst;
	int	i;
	if (min >= max)
	{
		return (0);
		*range = 0;
		dst = *range;
	}
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