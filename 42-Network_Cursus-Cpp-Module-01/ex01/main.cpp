/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:14:01 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/25 08:34:02 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *ptr;
    int i = 0;
    
    ptr = zombieHorde(3, "Ghosts");
    while (i < 3)
    {
        ptr[i].announce();
        i++;
    }
    delete [] ptr;
}
