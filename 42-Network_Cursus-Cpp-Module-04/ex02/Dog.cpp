/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:37:41 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 14:17:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//----------------------------Constructors----------------------------//

Dog::Dog()
{
	std::cout << "||   Dog  || Default constructor called" << std::endl;
    this->type = "Dog";
    ptr = new Brain();
}

//-----------------------Copy Constructor-----------------------------//

Dog::Dog(const Dog &org_obj)
{
	std::cout << "||   Dog  || Copy constructor called" << std::endl;
    this->ptr = new Brain();
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Dog &Dog::operator=(const Dog &org_obj)
{
    std::cout << "||   Dog  || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        delete this->ptr;
        this->type = org_obj.type;
        this->ptr = new Brain();
        *this->ptr = *org_obj.ptr;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Dog::~Dog()
{
	std::cout << "||   Dog  || Destructor called -- ";
    std::cout << " Deleting Dog's Brain " << std::endl;
    delete ptr;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Dog::makeSound() const
{
    std::cout << "*** Dog Sound ***" << std::endl;
}
