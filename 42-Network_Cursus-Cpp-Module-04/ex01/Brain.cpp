/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:11:32 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:41:36 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//--------------------------------------------------------------------//
//----------------------------Constructors----------------------------//
//--------------------------------------------------------------------//

Brain::Brain()
{
	std::cout << "|| Brain || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

Brain::Brain(const Brain &org_obj)
{
	std::cout << "|| Brain || Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Brain &Brain::operator=(const Brain &org_obj)
{
    std::cout << "|| Brain || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = org_obj.ideas[i];
	}
	return (*this);
}

//----------------------------Destructors-----------------------------//

Brain::~Brain()
{
	std::cout << "|| Brain || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Brain::set_ideas()
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "C++ is Better than C";
}

void Brain::print()
{
	for (int i = 0; i < 100; i++)
		std::cout << "|" << i << "| -> " + ideas[i] << std::endl;
}