# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thninh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 13:35:20 by thninh            #+#    #+#              #
#    Updated: 2016/11/03 14:10:29 by thninh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		 srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = ./includes

all : $(NAME)

$(NAME) :
	@gcc -c -Wall -Werror -Wextra $(SOURCE) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)

clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
