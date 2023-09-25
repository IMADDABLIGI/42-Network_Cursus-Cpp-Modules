/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:55:53 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 16:19:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("SOLDIER");
    A.attack("GHOST");
    A.takeDamage(1);
    A.beRepaired(20);
    A.takeDamage(10);
    A.takeDamage(10);
    A.takeDamage(1);
    for(int i = 1; i < 10; i++)
    A.attack("GHOST");
}