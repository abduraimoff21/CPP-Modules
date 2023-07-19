# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 02:25:43 by dabdurai          #+#    #+#              #
#    Updated: 2023/07/18 23:08:39 by dabdurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++ -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = phonebook.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

%.o:%.cpp
	$(CC) -c $< -o $(<:.cpp=.o)

clean :
	rm -f $(OBJ)
	clear
	@echo Cleaned!
	
fclean : clean
	rm -f $(NAME)
	clear
	@echo Cleaned!
	
re : fclean all