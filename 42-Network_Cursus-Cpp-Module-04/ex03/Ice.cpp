/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:15:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/21 10:47:03 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//----------------------------Constructor-----------------------------//

Ice::Ice()
{
	std::cout << "|| Ice || Default constructor called" << std::endl;
    this->type = "ice";
}

//-----------------------Copy Constructor-----------------------------//

Ice::Ice(const Ice &org_obj)
{
	std::cout << "|| Ice || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Ice &Ice::operator=(const Ice &org_obj)
{
    std::cout << "|| Ice || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Ice::~Ice()
{
	std::cout << "|| Ice || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//

AMateria* Ice::clone() const
{
    AMateria *ptr;
    ptr = new Ice();
    return (ptr);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}