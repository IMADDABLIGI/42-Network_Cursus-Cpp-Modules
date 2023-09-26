# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 15:13:48 by idabligi          #+#    #+#              #
#    Updated: 2023/08/17 15:35:09 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = LOG

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADERS = Account.hpp

FL = Account tests\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADERS)
	$(CC)  $(FLAGS) -std=c++98 $(FO) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)
	
re : fclean all
