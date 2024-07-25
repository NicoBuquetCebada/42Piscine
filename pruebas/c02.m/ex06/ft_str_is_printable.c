/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:22:27 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/13 14:01:26 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int		i;
	int		b;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		b = 0;
		if ((c >= 32 && c <= 126))
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
