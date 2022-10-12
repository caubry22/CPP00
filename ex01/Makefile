# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caubry <caubry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 18:57:58 by caubry            #+#    #+#              #
#    Updated: 2022/10/11 18:58:47 by caubry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra

NAME = phonebook

SRC = 	PhoneBook.cpp \
		Contact.cpp \
		main.cpp

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