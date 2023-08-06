# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/16 02:25:43 by dabdurai          #+#    #+#              #
#    Updated: 2023/08/06 21:39:46 by dabdurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 

CXX = $(CC) -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = phonebook.cpp contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $@
	clear
	@echo $(RED) Done!

%.o:%.cpp
	$(CXX) -c $< -o $(<:.cpp=.o)

clean :
	rm -f $(OBJ)
	clear
	@echo $(GREEN)Cleaned!
	
fclean : clean
	rm -f $(NAME)
	clear
	@echo $(YELLOW)Cleaned!
	
re : fclean all

mm:
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./phonebook

###############################################
######			    COLORS				 ######
###############################################

RED     := "\033[31m"
GREEN   := "\033[32m"
YELLOW  := "\033[33m"