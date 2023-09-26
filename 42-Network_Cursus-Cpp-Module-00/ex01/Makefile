# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 14:32:48 by idabligi          #+#    #+#              #
#    Updated: 2023/08/17 15:34:18 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phone

CC = c++
FLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADERS = Contact.hpp PhoneBook.hpp

FL = phone PhoneBook Contact\

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
