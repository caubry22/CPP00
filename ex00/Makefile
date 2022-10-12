# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caubry <caubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 18:41:23 by caubry            #+#    #+#              #
#    Updated: 2022/10/11 19:06:06 by caubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra

NAME = megaphone

SRC =	megaphone.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): ${OBJ}
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.c.o:
	$(CC) ${CFLAGS} -cpp $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all