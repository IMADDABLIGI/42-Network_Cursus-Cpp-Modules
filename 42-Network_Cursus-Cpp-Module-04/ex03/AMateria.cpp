/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:44:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/21 11:09:38 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

//--------------------------------------------------------------------//
//----------------------------Constructors----------------------------//
//--------------------------------------------------------------------//

AMateria::AMateria()
{
	std::cout << "|| AMateria || Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "|| AMateria || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

AMateria::AMateria(const AMateria &org_obj)
{
	std::cout << "|| AMateria || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

AMateria &AMateria::operator=(const AMateria &org_obj)
{
    std::cout << "|| AMateria || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
        this->type = org_obj.type;
	return (*this);
}

//----------------------------Destructors-----------------------------//

AMateria::~AMateria()
{
	std::cout << "|| AMateria || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//

std::string const &AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}