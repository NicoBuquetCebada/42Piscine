/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power (1).c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:04:43 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/17 14:05:35 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	r;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	r = 1;
	while (i < power)
	{
		r *= nb;
		i++;
	}
	return (r);
}

/*int main(void)
{
    printf("%d", ft_iterative_power(2, 4));
}*/