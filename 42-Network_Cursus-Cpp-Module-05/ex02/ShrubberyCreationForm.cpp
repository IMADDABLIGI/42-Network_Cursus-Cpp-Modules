/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:29:16 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 13:27:23 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

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

//-----------------------Copy assignmenet Operator--------------------//

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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && (executor.getGrade() <= this->getGrade_exec()))
    {
        std::ofstream file(getTarget().append("_shrubbery"));
        if (!file.is_open())
            ft_error("ShrubberyCreationForm || Error : creating file !!!");
        std::cout << "<-------| Executing Form ShrubberyCreationForm |------->" << std::endl;
        file << "     A" << std::endl;
        file << "    / \\" << std::endl;
        file << "   B   C" << std::endl;
        file << "  / \\" << std::endl;
        file << " D   E" << std::endl;
        file << "    / \\" << std::endl;
        file << "   F   G" << std::endl;
        file.close();
    }
    else
        throw AForm::ErrorExecuteException();
}
