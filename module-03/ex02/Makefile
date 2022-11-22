# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 13:45:22 by olabrahm          #+#    #+#              #
#    Updated: 2022/11/22 11:51:45 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exe

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp

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