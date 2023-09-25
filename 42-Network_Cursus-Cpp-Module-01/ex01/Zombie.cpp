/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:08:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/24 12:57:24 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void        Zombie::announce( void )
{
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void        Zombie::setname(std::string str)
{
    name = str;    
}

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << "Destroying " + name << std::endl;
}
