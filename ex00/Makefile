# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 02:24:29 by dabdurai          #+#    #+#              #
#    Updated: 2023/08/06 21:43:27 by dabdurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 
CXX = $(CC)-Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@
	clear
	@echo $(RED) Done!
	
%.o:%.cpp
	$(CC) -c $< -o $(<:.cpp=.o)

clean: 
	rm -f $(OBJ)
	clear
	@echo $(GREEN) Cleaned!
	
fclean: clean
	rm -f $(NAME)
	clear
	@echo $(YELLOW) Cleaned!
	
re: fclean all

###############################################
######			    COLORS				 ######
###############################################

RED     := "\033[31m"
GREEN   := "\033[32m"
YELLOW  := "\033[33m"