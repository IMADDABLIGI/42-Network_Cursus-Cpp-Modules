/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:17:06 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/02 14:20:41 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//----------------------------Constructors----------------------------//

Intern::Intern()
{
	std::cout << "|| Intern || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

Intern::Intern(const Intern &org_obj)
{
    org_obj.print("|| Intern || Copy constructor called");
}

//-----------------------Copy assignmenet Operator--------------------//

Intern &Intern::operator=(const Intern &org_obj)
{
    org_obj.print("|| Intern || Copy assignment operator called");
	return (*this);
}

//----------------------------Destructors-----------------------------//

Intern::~Intern()
{
	std::cout << "|| Intern || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

AForm   *Intern::ShrubberyCreation(std::string name, std::string target)
{
    AForm *ptr = new ShrubberyCreationForm(name, target);
    return (ptr);
}

AForm   *Intern::RobotomyRequest(std::string name, std::string target)
{
    AForm *ptr = new RobotomyRequestForm(name, target);
    return (ptr);
}

AForm   *Intern::PresidentialPardon(std::string name, std::string target)
{
    AForm *ptr = new PresidentialPardonForm(name, target);
    return (ptr);
}

void    Intern::print(std::string str) const
{
    std::cout << str << std::endl;
}

const char* Intern::Form_nameException::what() const throw()
{
    return ("Error !!!, The name you provided is not a Form.\n");
}

AForm   *Intern::makeForm(std::string name, std::string target)
{
    AForm* (Intern::*ptr[3]) (std::string name, std::string target) = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};
    std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (name == str[i])
        {
            std::cout << "Intern creates " + name << std::endl;   
            return ((this->*ptr[i])(name, target));
        }
    } 
    throw (Form_nameException());
}
