/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:02:48 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/17 17:36:28 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb)
		i *= i + 1;
	return (i);
}

/*int main(void)
{
    int i;

    i = 3;
    printf("%d! = %d", i, ft_iterative_factorial(i));
}*/