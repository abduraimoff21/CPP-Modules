# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdurai <dabdurai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 17:25:18 by dabdurai          #+#    #+#              #
#    Updated: 2023/09/04 19:36:32 by dabdurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CXX = $(CC) -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $@
	clear
	@echo $(GREEN) DONE!

%.o:%.cpp
	$(CXX) -c $< -o $(<:.cpp=.o)

clean:
	rm -f $(OBJ)
	clear
	@echo $(RED) CLEANED!

fclean: clean
	rm -f $(NAME)
	clear
	@echo $(YELLOW) CLEANED!

re: fclean all

###############################################
######			    COLORS				 ######
###############################################

RED     := "\033[31m"
GREEN   := "\033[32m"
YELLOW  := "\033[33m"