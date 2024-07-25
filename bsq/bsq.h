/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:44:48 by nbuquet-          #+#    #+#             */
/*   Updated: 2024/07/24 13:51:35 by nbuquet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
char	**ft_maparray(char *map, char *key);
int 	ft_check_obstacule(char **map, char obstacule, char* start, char* end);
int 	ft_check_square(char **map, int *cord, int max_i, char* key);
int		ft_fill(char **map, int *start, int size, char *key);
void	ft_putstr(char *str);
int 	*ft_find_best(char **map, char* key, int size);
char	**ft_maparray(char *map, char *key);
void	ft_print_map(char **map);
char	*ft_readmap(char *path);
#endif