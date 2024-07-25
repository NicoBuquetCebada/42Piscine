/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   version00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:17:04 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/14 18:03:51 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *s1, char *s2);

void	ft_convertir(char	*str)
{
	int	i;
	char	*dest;

/*	i = 0;           atoi
	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			integer += (str[i] - '0');
			if(str[i + 1] != '\0')
				integer *= 10;
		}
	}*/
	while (str[i])
	{
		if (str[i + 1])
			dest[i] = str[i + 2];
		i++;
	}
	return (dest);
}

/*void	valores_fijos(char **arr)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_convertir(str);
	//condcion para poner los 4, (no damos a mas hems estado todo la noche escriiendo logica, hemos llegado a bastantes conclusiones mañana hablamos)
	if (str[i] < str[i + 4])
		arr[i][str[i] - 1] = '4';
	if (str[i] > str[i + 4])
		arr[i][4 - str[i] - i] = '4';
	
}*/

void	combinatoria(char *pmr)
{
	char	v_41[4];
	char	v_31[12];
	char	v_32[12];
	char	v_21[8];
	char	v_22[24];
	char	t[2];
	int		i;

	*v_41 = "1234";
	*v_31 = "132423142134";
	*v_32 = "234113421243";
	*v_21 = "31243214";
	*v_22 = "142324133412324131422143";
	i = 0;
	while (pmr[i])
	{
		t[0] = pmr[i];
		t[1] = pmr[i + 4];
		if(cmp(t, "41") == 0)
		
	}
}

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}