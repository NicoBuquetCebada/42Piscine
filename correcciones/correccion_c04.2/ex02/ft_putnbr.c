/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:11:35 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/18 23:09:57 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive_print(int nb)
{
	int	r;

	if (nb == 0)
		return ;
	recursive_print(nb / 10);
	r = (nb % 10) + '0';
	write(1, &r, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		recursive_print(nb);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		recursive_print(nb);
}

/*int	main(void)
{
	ft_putnbr(-435);
}*/