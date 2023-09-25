/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:20:02 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 15:36:39 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//----------------------------Constructors----------------------------//

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "||-ScavTrap-||-- Default Constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energies_points = 50;
    this->Attack_points = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "||-ScavTrap-||-- Constructor called" << std::endl;
    this->Hit_points = 100;
    this->Energies_points = 50;
    this->Attack_points = 20;
}

//-----------------------Copy Constructor-----------------------------//

ScavTrap::ScavTrap(const ScavTrap &lfs)
{
	std::cout << "||-ScavTrap-||-- Copy Constructor called" << std::endl;
	*this = lfs;
}


//-----------------------Copy assignmenet Operator--------------------//

ScavTrap &ScavTrap::operator=(const ScavTrap &lfs)
{
	std::cout << "||-ScavTrap-||-- Copy Assignment Operator called" << std::endl;
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

ScavTrap::~ScavTrap()
{std::cout << "||-ScavTrap-||-- Destructor called" << std::endl;}

//--------------------------------------------------------------------//
//---------------------Functions Implementations----------------------//
//--------------------------------------------------------------------//

void    ScavTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && Energies_points > 0)
	{
		std::cout << "|| ScavTrap makes ClapTrap " + Name + " attacks " + target;
        std::cout << ", causing " << Attack_points <<  " points of damage! ||" << std::endl;
		Energies_points--;
	}
	else if (!Energies_points)
		std::cout << "ScavTrap || No Energie_Points to  Attack !!" << std::endl;
	else if (Hit_points <= 0)
		std::cout << "ScavTrap || ClapTrap is Dead he can't Attack !!" << std::endl;
}

void ScavTrap::guardGate()
{std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;}

//--------------------------------------------------------------------//