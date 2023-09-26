# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 15:36:16 by idabligi          #+#    #+#              #
#    Updated: 2023/08/17 15:33:56 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f

FL = megaphone\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO)
	$(CC)  $(FLAGS) -std=c++98 $(FO) -o $(NAME)

%.o:%.cpp
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)
	
re : fclean all
