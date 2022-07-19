# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 07:11:55 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/19 07:19:53 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRC = main.cpp Zombie.cpp zombieHorde.cpp

HEADER = Zombie.hpp

INCLUDES = -I $(HEADER)

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all
