/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:52:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:43:08 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//----------------------------Constructors----------------------------//

Cat::Cat()
{
	std::cout << "||   Cat  || Default constructor called" << std::endl;
    this->type = "Cat";
    ptr = new Brain();
}

//-----------------------Copy Constructor-----------------------------//

Cat::Cat(const Cat &org_obj)
{
	std::cout << "||   Cat  || Copy constructor called" << std::endl;
    this->ptr = new Brain();
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Cat &Cat::operator=(const Cat &org_obj)
{
    std::cout << "||   Cat  || Copy assignment operator called" << std::endl;
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

Cat::~Cat()
{
	std::cout << "||   Cat  || Destructor called -- ";
	std::cout << "Deleting Cat's Brain " << std::endl;
    delete ptr;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Cat::makeSound() const
{
    std::cout << "*** Cat Sound ***" << std::endl;
}