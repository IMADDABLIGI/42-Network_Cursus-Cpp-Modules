/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:17:38 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/22 10:01:16 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &obj) : a(obj)
{
}

HumanA::HumanA(std::string Name, Weapon &obj) : name(Name), a(obj)
{
}

void    HumanA::attack()
{
    std::string str = a.getType();
    std::cout << name + " attacks with their " + str << std::endl;
}