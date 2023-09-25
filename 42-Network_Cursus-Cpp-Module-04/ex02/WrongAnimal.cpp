/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:28:15 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 15:06:08 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//--------------------------------------------------------------------//
//----------------------------Constructors----------------------------//
//--------------------------------------------------------------------//

WrongAnimal::WrongAnimal()
{
	std::cout << "|| WrongAnimal || Default constructor called" << std::endl;
    type = "WrongAnimal";
}

//-----------------------Copy Constructor-----------------------------//

WrongAnimal::WrongAnimal(const WrongAnimal &org_obj)
{
	std::cout << "|| WrongAnimal || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &org_obj)
{
    std::cout << "|| WrongAnimal || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

WrongAnimal::~WrongAnimal()
{
	std::cout << "|| WrongAnimal || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    WrongAnimal::makeSound() const
{
    std::cout << "*** WrongAnimal Sound ***" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}
