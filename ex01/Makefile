# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 22:52:55 by rshatra           #+#    #+#              #
#    Updated: 2024/09/04 00:46:57 by rshatra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook_app
CFLAGS = -g -Wall -Werror -Wextra -std=c++98
CC = g++

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
