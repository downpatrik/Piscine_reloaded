# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:13:40 by wvenita           #+#    #+#              #
#    Updated: 2019/04/05 18:14:11 by wvenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = includes
OBJ = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJO = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: make_lib

make_lib:
	gcc -c $(OBJ) -I $(HEADERS)
	ar -rv $(NAME) $(OBJO)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all