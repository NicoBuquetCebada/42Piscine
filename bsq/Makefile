# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbuquet- <nbuquet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:44:59 by nbuquet-          #+#    #+#              #
#    Updated: 2024/07/24 14:15:54 by nbuquet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror

CHECK = norminette -R CheckForbiddenSourceHeader *

SRCS = main.c ft_readmap.c ft_putstr.c ft_print_map.c ft_maparray ft_find_best.c ft_fill.c ft_check_square.c
OBJS = main.o ft_readmap.o ft_putstr.o ft_print_map.o ft_maparray ft_find_best.o ft_fill.o ft_check_square.o

TARGET = bsq

all: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
%.o: %.c bsq.h
	$(CC) $(CFLAGS) -c $<
clean:
	rm -f $(OBJS) $(TARGET)
fclean: clean
	rm -rf *.gch *.out *.swp *.swo
re: fclean all

.PHONY: all clean fclean re