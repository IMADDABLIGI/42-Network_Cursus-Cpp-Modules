/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:53:37 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/22 18:12:42 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//----------------------------Constructors----------------------------//

MateriaSource::MateriaSource()
{
	std::cout << "|| MateriaSource || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

MateriaSource::MateriaSource(const MateriaSource &org_obj)
{
	std::cout << "|| MateriaSource || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

MateriaSource &MateriaSource::operator=(const MateriaSource &org_obj)
{
    std::cout << "|| MateriaSource ||--- Copy assignment operator called ---" << std::endl;
    if (this != &org_obj)
		this->A = org_obj.A;
	return (*this);
}

//----------------------------Destructor-----------------------------//

MateriaSource::~MateriaSource()
{
	std::cout << "|| MateriaSource || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//

void MateriaSource::learnMateria(AMateria* obj)
{
    A.equip(obj->clone());
    delete obj;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    return (A.ret_Materia(type));
}