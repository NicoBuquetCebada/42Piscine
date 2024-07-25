/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:45:49 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/13 13:57:17 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		b;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		b = 0;
		if ((c >= '0' && c <= '9'))
		{
			b = 1;
		}
		if (b == 0)
			return (b);
		i++;
	}
	if (i == 0)
		return (1);
	return (b);
}
