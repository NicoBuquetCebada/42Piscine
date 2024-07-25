/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:02:48 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/25 00:28:09 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (++i <= nb)
		num = num * i;
	return (num);
}

/*int main(void)
{
    int i;

    i = -1;
    printf("%d! = %d\n", i, ft_iterative_factorial(i));
}*/
