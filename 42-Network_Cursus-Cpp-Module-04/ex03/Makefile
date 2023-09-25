# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 15:12:16 by idabligi          #+#    #+#              #
#    Updated: 2023/09/22 15:08:12 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
HEADERS = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp

FL = main AMateria Cure Ice Character MateriaSource\

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