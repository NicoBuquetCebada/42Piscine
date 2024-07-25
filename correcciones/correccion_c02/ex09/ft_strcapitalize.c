/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 22:55:21 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/09 17:10:33 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str);
int		isalphnum(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;
	int	b;

	b = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((isalphnum(str[i]) == 1) && (b == 0))
		{
			n = i;
			b = 1;
		}
		if (isalphnum(str[i]) == 0 || str[i + 1] == '\0')
		{
			if (str[n] > '`' && str[n] < '{')
				str[n] = str[n] - 32;
			b = 0;
		}
		i++;
	}
	return (str);
}

int	isalphnum(char c)
{
	if ((c > '/' && c < ':') || (c > '`' && c < '{') || (c > '@' && c < '['))
		return (1);
	return (0);
}

/*int main(void)
{
	char c[61] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *v = "";

	v = ft_strcapitalize(c);
	printf("%s", v);
}*/