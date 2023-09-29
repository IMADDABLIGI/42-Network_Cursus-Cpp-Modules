/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:29:16 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/29 17:23:48 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

//----------------------------Constructors----------------------------//

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "None", 145, 137)
{
	std::cout << "|| ShrubberyCreationForm || Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShrubberyCreationForm", Target, 145, 137)
{
	std::cout << "|| ShrubberyCreationForm || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &org_obj) : AForm(org_obj.getName(), 
org_obj.getTarget(), org_obj.getGrade_sign(), org_obj.getGrade_exec(), org_obj.getSign())
{
	std::cout << "|| ShrubberyCreationForm || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//   TO BE DONE !!!

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &org_obj)
{
    std::cout << "|| ShrubberyCreationForm || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
        this->setSign(org_obj.getSign());
	return (*this);
}

//----------------------------Destructors-----------------------------//

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "|| ShrubberyCreationForm || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
    if (this->getSign() && (executor.getGrade() <= this->getGrade_exec()))
    {
        std::cout << "WORKING\n";
    }
    else
        throw AForm::ErrorExecuteException();
}