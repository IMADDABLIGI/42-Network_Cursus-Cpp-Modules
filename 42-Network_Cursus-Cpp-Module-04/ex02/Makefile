# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 11:43:30 by idabligi          #+#    #+#              #
#    Updated: 2023/09/20 10:47:50 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp WrongAnimal.hpp WrongCat.hpp

FL = main Animal Dog Cat Brain WrongAnimal WrongCat\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADERS)
	$(CC)  $(FLAGS) $(FO) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)

re : fclean all