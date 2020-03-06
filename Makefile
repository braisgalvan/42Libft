# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgalvan- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 18:37:38 by bgalvan-          #+#    #+#              #
#    Updated: 2020/03/05 17:15:19 by bgalvan-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=*.c

OBJECTS=*.o

all:	$(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJECTS)
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
