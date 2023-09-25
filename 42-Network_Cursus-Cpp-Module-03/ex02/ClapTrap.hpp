/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:45:10 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 15:53:55 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int         Hit_points;
        int         Energies_points;
        int         Attack_points;

    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &lfs);
        ClapTrap &operator=(const ClapTrap &lfs);
        ~ClapTrap();
};

#endif
