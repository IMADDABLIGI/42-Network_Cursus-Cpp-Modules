/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:55:53 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 16:35:30 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Rbt("Alien");
    Rbt.attack("Terminator");
    Rbt.takeDamage(20);
    Rbt.beRepaired(30);
    Rbt.highFivesGuys();
    Rbt.takeDamage(50);
    Rbt.takeDamage(1);
    for (int i = 1; i < 100; i++)
    Rbt.attack("Terminator 2.0");
    return 0;
}
