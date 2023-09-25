# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 13:58:35 by idabligi          #+#    #+#              #
#    Updated: 2023/08/24 11:33:22 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BRAIN

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FL = main \

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO)
	$(CC)  $(FLAGS) $(FO) -o $(NAME)

%.o:%.cpp
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)
	
re : fclean all