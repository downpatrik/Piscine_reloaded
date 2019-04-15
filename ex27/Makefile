# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 18:20:52 by wvenita           #+#    #+#              #
#    Updated: 2019/04/09 20:56:39 by wvenita          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
OBJ = src/ft_display_file.c
FLAGS = -Wall -Wextra -Werror

all:
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clear:
	/bin/rm -f *.o

fclean: clean
	/bin/rm	-f $(NAME)

re: fclean all

.PHONY: all clean fclean re