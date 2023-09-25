/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:37:41 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 15:05:28 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//----------------------------Constructors----------------------------//

Dog::Dog()
{
	std::cout << "||   Dog  || Default constructor called" << std::endl;
    this->type = "Dog";
}

//-----------------------Copy Constructor-----------------------------//

Dog::Dog(const Dog &org_obj)
{
	std::cout << "||   Dog  || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Dog &Dog::operator=(const Dog &org_obj)
{
    std::cout << "||   Dog  || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Dog::~Dog()
{
	std::cout << "||   Dog  || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Dog::makeSound() const
{
    std::cout << "*** Dog Sound ***" << std::endl;
}