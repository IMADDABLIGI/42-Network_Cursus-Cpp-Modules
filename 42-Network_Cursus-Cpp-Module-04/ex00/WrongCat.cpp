/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:52:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 14:09:08 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//----------------------------Constructors----------------------------//

WrongCat::WrongCat()
{
	std::cout << "||   WrongCat  || Default constructor called" << std::endl;
    this->type = "WrongCat";
}

//-----------------------Copy Constructor-----------------------------//

WrongCat::WrongCat(const WrongCat &org_obj)
{
	std::cout << "||   WrongCat  || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

WrongCat &WrongCat::operator=(const WrongCat &org_obj)
{
    std::cout << "||   WrongCat  || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->type = org_obj.type;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

WrongCat::~WrongCat()
{
	std::cout << "||   WrongCat  || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    WrongCat::makeSound() const
{
    std::cout << "*** WrongCat Sound ***" << std::endl;
}
