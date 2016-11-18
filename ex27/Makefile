# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thninh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 14:44:59 by thninh            #+#    #+#              #
#    Updated: 2016/11/03 14:49:43 by thninh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c

HEADER = ft_find.h

OBJ = main.o

all : $(NAME)

$(NAME) :
	@gcc -c -Wall -Wextra -Werror $(SRC) $(HEADER)
	@gcc $(OBJ) -o $(NAME)

clean :
	@/bin/rm -rf $(OBJ) ft_find.h.gch

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
