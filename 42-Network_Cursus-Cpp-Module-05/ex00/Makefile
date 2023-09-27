# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 10:31:43 by idabligi          #+#    #+#              #
#    Updated: 2023/09/27 10:18:07 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
HEADERS = Bureaucrat.hpp

FL = main Bureaucrat\

FO = $(FL:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADERS)
	$(CC)  $(FLAGS) $(FO) -o $(NAME)
	$(RM) $(FO)
	./$(NAME)

%.o:%.cpp $(HEADERS)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO)

fclean : clean
	$(RM) $(NAME) $(FO)

re : fclean all