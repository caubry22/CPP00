# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caubry <caubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 11:50:12 by caubry            #+#    #+#              #
#    Updated: 2022/10/12 12:26:53 by caubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra

NAME = test

SRC = 	Account.cpp \
		tests.cpp

OBJ = ${SRC:.cpp=.o}

all: $(NAME)

$(NAME): ${OBJ}
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.c.o:
	$(CC) ${CFLAGS} -I/usr/include -cpp $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all