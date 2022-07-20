# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 06:57:26 by olabrahm          #+#    #+#              #
#    Updated: 2022/07/20 07:15:11 by olabrahm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp replace.cpp

HEADER = replace.hpp

INCLUDES = -L $(HEADER)

FLAGS = -Wall -Werror -Wextra -std=c++98

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) $(INCLUDES) -o $(NAME)

clean: # no obj files to clean

fclean: clean

re: fclean all
