# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saad <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/06 00:36:53 by saad              #+#    #+#              #
#    Updated: 2019/03/25 15:15:24 by sael-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/*.c
HEADERS = includes/*.h
OBJECT = *.o
FLAGS = -Wall -Werror -Wextra 
DELETE = rm -f

ALL : $(NAME)

$(NAME) : 
	gcc -c $(FLAGS) $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean :
	$(DELETE) $(OBJECT)

fclean : clean
	$(DELETE) $(NAME)

re : fclean ALL
