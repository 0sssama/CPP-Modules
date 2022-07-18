# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 14:36:45 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/18 14:38:36 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

INCLUDES = -I Zombie.hpp

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all
