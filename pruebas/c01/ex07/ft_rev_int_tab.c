/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 02:37:01 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/07 17:51:53 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	c;
	int	r;

	c = size - 1;
	r = 0;
	while (c > size / 2)
	{
		t = tab[c];
		tab[c] = tab[r];
		tab[r] = t;
		c--;
		r++;
	}
}
