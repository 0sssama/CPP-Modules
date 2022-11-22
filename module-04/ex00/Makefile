# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 14:48:46 by olabrahm          #+#    #+#              #
#    Updated: 2022/11/22 14:48:47 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp

HEADER = Animal.hpp Cat.hpp Dog.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	c++ $(FLAGS) $(SRC) -o $(NAME)

clean: # no obj files to clean

fclean: clean
	$(RM) $(NAME)

re: fclean all