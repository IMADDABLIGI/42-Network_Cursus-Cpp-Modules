# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 11:40:08 by idabligi          #+#    #+#              #
#    Updated: 2023/10/14 13:14:21 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
HEADERS = Array.hpp

FL = main\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADERS)
	$(CC)  $(FLAGS) $(FO) -o $(NAME)
	./$(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)

re : fclean all