/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:01:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/12 12:32:54 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//----------------------------Constructors----------------------------//

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "||-FragTrap-||-- Default Constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energies_points = 100;
    this->Attack_points = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "||-FragTrap-||-- Constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energies_points = 100;
    this->Attack_points = 30;
}

//-----------------------Copy Constructor-----------------------------//

FragTrap::FragTrap(const FragTrap &lfs)
{
	std::cout << "||-FragTrap-||-- Copy Constructor called" << std::endl;
	*this = lfs;
}


//-----------------------Copy assignmenet Operator--------------------//

FragTrap &FragTrap::operator=(const FragTrap &lfs)
{
	std::cout << "||-FragTrap-||-- Copy Assignment Operator called" << std::endl;
	if (this != &lfs)
	{
		Name = lfs.Name;
		Hit_points = lfs.Hit_points;
		Energies_points = lfs.Energies_points;
		Attack_points = lfs.Attack_points;
	}
	return (*this); 
}

//----------------------------Destructor------------------------------//

FragTrap::~FragTrap()
{std::cout << "||-FragTrap-||-- Destructor called" << std::endl;}

//---------------------Functions Implementations----------------------//

void FragTrap::highFivesGuys(void)
{std::cout << "FragTrap || High Five Guys" << std::endl;}

//--------------------------------------------------------------------//