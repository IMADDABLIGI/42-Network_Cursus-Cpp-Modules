/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:54:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/24 12:48:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void        Zombie::announce( void )
{
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string Name)
{
    name = Name;
}

Zombie::~Zombie()
{
    std::cout << "Destroying " + name << std::endl;
}
