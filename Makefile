# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aikhatam <aikhatam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 12:21:07 by aikhatam          #+#    #+#              #
#    Updated: 2019/10/15 17:45:47 by aikhatam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c

SRCS = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME):
	gcc  $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
		/bin/rm -f $(OBJECTS)
fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
	