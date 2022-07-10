# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 16:55:37 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/10 22:16:40 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp cmds.cpp

INCLUDES = Contact.hpp PhoneBook.hpp main.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC) $(INCLUDES)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all
