/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:20:45 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/22 19:05:12 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_trim(char *str);
char	*ft_vdict(char *dict, int n, int l);
char	*ft_vdicta(char *dict, char n);
char	*ft_vdictb(char *dict, char n1, char n2);
void	rush_c(int len, int i, char *dict, char *src);

void	rush(char *dict, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		rush_c(ft_strlen(src) - i, i, dict, src);
		i++;
	}
}

void	rush_c(int len, int i, char *dict, char *src)
{
	int	m;

	m = len % 3;
	if (src[i] != '0')
	{
		if (len == 2 || m == 2)
			ft_putstr(ft_vdictb(dict, src[i], src[i + 1]));
		else if (len > 2 && m == 1)
		{
			ft_putstr(ft_vdicta(dict, src[i]));
			ft_putstr(" ");
			ft_putstr(ft_vdict(dict, len, 0));
		}
		else if (len > 2 && m == 0)
		{
			ft_putstr(ft_vdicta(dict, src[i]));
			ft_putstr(" ");
			ft_putstr(ft_vdict(dict, 3, 0));
		}
		else if (len == 1 && src[i - 1] != '1')
			ft_putstr(ft_vdicta(dict, src[i]));
		if (len != 1) //primer fallo
			ft_putstr(" ");
	}
}

char	*ft_vdictb(char *dict, char n1, char n2)
{
	int		i;
	int		j;
	char	*dst;
	int		l;

	i = 0;
	j = 0;
	dict = ft_trim(dict);
	while (dict[i])
	{
		if (dict[i] == ':' && ((n1 == dict[i - 2] && n2 == dict[i - 1])
				|| (n1 == dict[i - 2] && n1 != '1')))
		{
			l = ++i;
			while (dict[l] != '\n')
				l++;
			dst = (char *)malloc (sizeof(char) + (l - i) + 1);
			while (dict[i] != '\n')
				dst[j++] = dict[i++];
			dst[j] = '\0';
			return (dst);
		}
		i++;
	}
	return (0);
}

char	*ft_vdicta(char *dict, char n)
{
	int		i;
	int		j;
	char	*dst;
	int		l;

	i = 0;
	j = 0;
	dict = ft_trim(dict);
	while (dict[i])
	{
		if (dict[i] == ':' && dict[i - 1] == n)
		{
			l = ++i;
			while (dict[l] != '\n')
				l++;
			dst = (char *)malloc (sizeof(char) + (l - i) + 1);
			while (dict[i] != '\n')
				dst[j++] = dict[i++];
			dst[j] = '\0';
			return (dst);
		}
		i++;
	}
	return (0);
}

char	*ft_vdict(char *dict, int n, int l)
{
	int		i;
	char	*dst;

	i = 0;
	dict = ft_trim(dict);
	while (dict[i++])
	{
		if (dict[i] == '\n')
			l = 0;
		if (dict[i] == ':' && n == l - 1)
		{
			l = ++i;
			while (dict[l] != '\n')
				l++;
			dst = (char *)malloc (sizeof(char) + (l - i) + 1);
			l = 0;
			while (dict[i] != '\n')
				dst[l++] = dict[i++];
			dst[l] = '\0';
			return (dst);
		}
		l++;
	}
	return (0);
}
