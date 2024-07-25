# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/20 21:18:04 by guigonza          #+#    #+#              #
#    Updated: 2024/07/21 23:34:02 by nbuquet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#rush-02
NAME	= rush-02
CC	= cc -Wall -Wextra -Werror main.c -o rush-02
CLEAN = rm -rf *.out *.swp *.swo
CHECK	= norminette -R CheckForbiddenSourceHeader *
SRCS = ft.c ft_rdict.c rush02.c 

deafult:
	$(CC) $(SRCS)
check:
	$(CHECK) $(SRCS)

fclean:
	$(CLEAN)


