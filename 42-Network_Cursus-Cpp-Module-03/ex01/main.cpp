/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:55:53 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 16:26:02 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Rbt("Alien");
    Rbt.attack("Terminator");
    Rbt.takeDamage(20);
    Rbt.beRepaired(30);
    Rbt.guardGate();
    Rbt.takeDamage(50);
    Rbt.takeDamage(1);
    for (int i = 1; i < 50; i++)
    Rbt.attack("Terminator 2.0");
    return 0;
}