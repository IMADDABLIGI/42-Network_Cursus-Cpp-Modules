/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:10:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 16:14:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

//----------------------------Constructors----------------------------//

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", "None", 25, 5)
{
	std::cout << "|| PresidentialPardonForm || Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("PresidentialPardonForm", Target, 25, 5)
{
	std::cout << "|| PresidentialPardonForm || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &org_obj) : AForm(org_obj.getName(), 
org_obj.getTarget(), org_obj.getGrade_sign(), org_obj.getGrade_exec(), org_obj.getSign())
{
	std::cout << "|| PresidentialPardonForm || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &org_obj)
{
    std::cout << "|| PresidentialPardonForm || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
        this->setSign(org_obj.getSign());
	return (*this);
}

//----------------------------Destructors-----------------------------//

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "|| PresidentialPardonForm || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && (executor.getGrade() <= this->getGrade_exec()))
    {
        std::cout << "<-------| Executing Form PresidentialPardonForm |------->" << std::endl;
        std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
     else
        throw AForm::ErrorExecuteException();
}