/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:24:34 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 13:48:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

//----------------------------Constructors----------------------------//

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "None", 72, 45)
{
	std::cout << "|| RobotomyRequestForm || Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", Target, 72, 45)
{
	std::cout << "|| RobotomyRequestForm || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &org_obj) : AForm(org_obj.getName(), 
org_obj.getTarget(), org_obj.getGrade_sign(), org_obj.getGrade_exec(), org_obj.getSign())
{
	std::cout << "|| RobotomyRequestForm || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &org_obj)
{
    std::cout << "|| RobotomyRequestForm || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
        this->setSign(org_obj.getSign());
	return (*this);
}

//----------------------------Destructors-----------------------------//

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "|| RobotomyRequestForm || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() && (executor.getGrade() <= this->getGrade_exec()))
    {
        std::cout << "<-------| Executing Form RobotomyRequestForm |------->" << std::endl;
        static int num = 2;
        if (!(num % 2))
            std::cout << this->getTarget() + " has been robotomized successfully" << std::endl;
        else
            std::cout << "The robotomy failed" << std::endl;
            num++;
    }
     else
        throw AForm::ErrorExecuteException();
}