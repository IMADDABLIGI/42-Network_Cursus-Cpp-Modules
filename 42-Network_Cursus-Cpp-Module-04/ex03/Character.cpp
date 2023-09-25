/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:34:17 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 12:38:57 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

//----------------------------Constructors----------------------------//

Character::Character()
{
	std::cout << "|| Character || Default constructor called" << std::endl;
	for (int j = 0; j < 4; j++)
		this->ivtry[j] = NULL;
}

Character::Character(std::string Name) : name(Name)
{
	std::cout << "|| Character || Constructor called" << std::endl;
	for (int j = 0; j < 4; j++)
		this->ivtry[j] = NULL;
}

//-----------------------Copy Constructor-----------------------------//

Character::Character(const Character &org_obj)
{
	std::cout << "|| Character || Copy constructor called" << std::endl;
	for (int j = 0; j < 4; j++)
		this->ivtry[j] = NULL;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Character &Character::operator=(const Character &org_obj)
{
    std::cout << "|| Character ||--- Copy assignment operator called ---" << std::endl;
    if (this != &org_obj)
	{
		this->name = org_obj.name;
		for (int j = 0; j < 4; j++)
		{
			for (int k = j + 1; k < 4; k++)
			{
				if (this->ivtry[j] == this->ivtry[k])
					this->ivtry[k] = NULL;
			}
			delete this->ivtry[j];
		}
		for (int j = 0; j < 4 ; j++)
		{
			if (org_obj.ivtry[j])
				this->ivtry[j] = org_obj.ivtry[j]->clone();
			else
				this->ivtry[j] = NULL;
		}
	}
	return (*this);
}

//----------------------------Destructors-----------------------------//

Character::~Character()
{
	std::cout << "|| Character || Destructor called" << std::endl;
	for (int j = 0; j < 4; j++) 
	{
		for (int k = j + 1; k < 4; k++)
		{
			if (this->ivtry[j] == this->ivtry[k])
				this->ivtry[k] = NULL;
		}
		delete this->ivtry[j];
	}
}

//----------------------------Implementations-------------------------//

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
   for (int i = 0; i < 4; i++)
	{
		if (!this->ivtry[i])
		{
			this->ivtry[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->ivtry[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->ivtry[idx])
			this->ivtry[idx]->use(target);
	}
}

AMateria* Character::ret_Materia(std::string const & type)
{
	for (int i = 0; i < 4; i++)
    {
        if (this->ivtry[i])
        {
            if (this->ivtry[i]->getType() == type)
                return (this->ivtry[i]->clone());
        }
    }
	return (0);
}
