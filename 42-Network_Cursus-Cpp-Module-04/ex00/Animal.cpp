/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:28:15 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 15:05:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//--------------------------------------------------------------------//
//----------------------------Constructors----------------------------//
//--------------------------------------------------------------------//

Animal::Animal()
{
	std::cout << "|| Animal || Default constructor called" << std::endl;
    type = "Animal";
}

//-----------------------Copy Constructor-----------------------------//

Animal::Animal(const Animal &org_obj)
{
	std::cout << "|| Animal || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Animal &Animal::operator=(const Animal &org_obj)
{
    std::cout << "|| Animal || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Animal::~Animal()
{
	std::cout << "|| Animal || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Animal::makeSound() const
{
    std::cout << "*** Animal Sound ***" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}