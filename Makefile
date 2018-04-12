# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lapain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/09 20:43:09 by lapain            #+#    #+#              #
#    Updated: 2018/04/11 21:14:14 by lapain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		get_next_line

FLAGS = 	-Wall -Werror -Wextra

SRC = 		main.c \
		get_next_line.c  

HEADER = 	get_next_line.h

all : $(NAME)

$(NAME) : 
	clang $(FLAGS) -I $(HEADER) -Llibft -lft $(SRC) -o $(NAME)
	@echo "\033[32mCompiled success\033[0m"

fclean : 
	rm -rf $(NAME)
	@echo "\033[32mExcutable removed\033[0m"

re : fclean all
