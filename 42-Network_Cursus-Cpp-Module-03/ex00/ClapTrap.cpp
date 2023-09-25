/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:53:08 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/16 18:20:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//----------------------------Constructors----------------------------//

ClapTrap::ClapTrap() : Hit_points(10), 
Energies_points(10), Attack_points(0)
{std::cout << "Default Constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string name) : Name(name), Hit_points(10), 
Energies_points(10), Attack_points(0)
{std::cout << "Constructor called" << std::endl;}

//-----------------------Copy Constructor-----------------------------//

ClapTrap::ClapTrap(const ClapTrap &lfs)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = lfs;
}

//-----------------------Copy assignmenet Operator--------------------//

ClapTrap    &ClapTrap::operator=(const ClapTrap &lfs)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
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

ClapTrap::~ClapTrap()
{std::cout << "Destructor called" << std::endl;}


//--------------------------------------------------------------------//
//---------------------Functions Implementations----------------------//
//--------------------------------------------------------------------//

void    ClapTrap::attack(const std::string& target)
{
	if (Hit_points > 0 && Energies_points > 0)
	{
		std::cout << "|| ClapTrap " + Name + " attacks " + target;
        std::cout << ", causing " << Attack_points <<  " points of damage! ||" << std::endl;
		Energies_points--;
	}
	else if (!Energies_points)
		std::cout << "No Energie_Points to  Attack !!" << std::endl;
	else if (Hit_points <= 0)
		std::cout << "ClapTrap is Dead he can't Attack !!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (Hit_points > 0)
	{
		std::cout << "|| ClapTrap takes damage of " << amount << " PTS ||" << std::endl;
		Hit_points -= amount;
	}
	else
	{
		std::cout << "|| ClapTrap is already dead, Stop beating him !!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (Hit_points > 0 && Energies_points > 0)
	{
		std::cout << "|| ClapTrap repairs itself ||";
		std::cout << " Hit Points : " << amount << " ||" << std::endl;
		Hit_points = amount;
		Energies_points--;
	}
	else if (!Energies_points)
		std::cout << "No Energie_Points to be Repaired !!" << std::endl;
	else if (Hit_points <= 0)
		std::cout << "ClapTrap is Dead He can't repair his self !!" << std::endl;
}

//--------------------------------------------------------------------//