/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:10:02 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:55:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//----------------------------Constructor-----------------------------//

Cure::Cure()
{
	std::cout << "|| Cure || Default constructor called" << std::endl;
    this->type = "cure";
}

//-----------------------Copy Constructor-----------------------------//

Cure::Cure(const Cure &org_obj)
{
	std::cout << "|| Cure || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Cure &Cure::operator=(const Cure &org_obj)
{
    std::cout << "|| Cure || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
        this->type = org_obj.type;
	return (*this);
}

//----------------------------Destructors-----------------------------//

Cure::~Cure()
{
	std::cout << "|| Cure || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//

AMateria* Cure::clone() const
{
    AMateria *ptr;
    ptr = new Cure();
    return (ptr);
}

void Cure::use(ICharacter& target)
{
    std::cout << "Cure: * heals "+ target.getName() + "'s wounds *" << std::endl;
}
