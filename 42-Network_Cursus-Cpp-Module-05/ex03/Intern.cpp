/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:17:06 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 17:53:48 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

//----------------------------Constructors----------------------------//

Intern::Intern()
{
	std::cout << "|| Intern || Default constructor called" << std::endl;
}



//-----------------------Copy Constructor-----------------------------//

// Intern::Intern(const Intern &org_obj)
// {
// 	std::cout << "|| Intern || Copy constructor called" << std::endl;
// }

// //-----------------------Copy assignmenet Operator--------------------//

// Intern &Intern::operator=(const Intern &org_obj)
// {
//     std::cout << "|| Intern || Copy assignment operator called" << std::endl;
// 	return (*this);
// }

//----------------------------Destructors-----------------------------//

Intern::~Intern()
{
	std::cout << "|| Intern || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

AForm   *Intern::makeForm(std::string name, std::string target)
{
    AForm* (Intern::*ptr[2]) (std::string name, std::string target);
    ptr[0] = &Intern::ShrubberyCreation;
    return ((this->*ptr[0])(name, target));
}

AForm   *Intern::ShrubberyCreation(std::string name, std::string target)
{
    AForm *ptr = new ShrubberyCreationForm(name, target);
    return (ptr);
}