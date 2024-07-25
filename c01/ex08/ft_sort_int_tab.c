/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:22:58 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/07 19:34:57 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	r;
	int	g;

	r = 0;
	while (r < size)
	{
		t = r;
		g = r;
		while (t < size - 1)
		{
			if (tab[t] > tab[t + 1])
				g = t + 1;
			t++;
		}
		t = tab[r];
		tab[r] = tab[g];
		tab[g] = t;
		r++;
	}
}
