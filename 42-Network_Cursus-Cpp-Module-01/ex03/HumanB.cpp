/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:18:14 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/24 13:14:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string Name)
{
    name = Name;
    b = NULL;
}

void HumanB::setWeapon(Weapon &obj)
{
    b = &obj;
}

void    HumanB::attack()
{
    std::string str = b->getType();
    std::cout << name + " attacks with their " + str << std::endl;
}
