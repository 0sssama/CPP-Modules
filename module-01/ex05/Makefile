# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 09:09:34 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/20 09:28:10 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

INCLUDES = -I $(HEADER)

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all