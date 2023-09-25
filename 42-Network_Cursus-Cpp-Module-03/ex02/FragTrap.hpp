/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:58:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/17 16:08:36 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &lfs);
	FragTrap &operator=(const FragTrap &lfs);
	~FragTrap();

    void highFivesGuys(void);
};

#endif