# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 07:56:37 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/19 07:57:54 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

INCLUDES = -I Weapon.hpp -I HumanB.hpp -IHumanA.hpp 

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all
