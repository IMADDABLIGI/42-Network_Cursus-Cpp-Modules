# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 13:54:25 by idabligi          #+#    #+#              #
#    Updated: 2023/08/24 13:25:18 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = File.hpp
RM = rm -f
FX = *.txt

FL = main File\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADERS)
	$(CC)  $(FLAGS) $(FO) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO) $(FX)
	
re : fclean all