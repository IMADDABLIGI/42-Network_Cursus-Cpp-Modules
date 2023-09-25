/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:52:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 15:10:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//----------------------------Constructors----------------------------//

Cat::Cat()
{
	std::cout << "||   Cat  || Default constructor called" << std::endl;
    this->type = "Cat";
}

//-----------------------Copy Constructor-----------------------------//

Cat::Cat(const Cat &org_obj)
{
	std::cout << "||   Cat  || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Cat &Cat::operator=(const Cat &org_obj)
{
    std::cout << "||   Cat  || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Cat::~Cat()
{
	std::cout << "||   Cat  || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Cat::makeSound() const
{
    std::cout << "*** Cat Sound ***" << std::endl;
}