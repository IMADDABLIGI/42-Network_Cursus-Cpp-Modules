/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:11:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/29 17:56:22 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//----------------------------Constructors----------------------------//

AForm::AForm() : name("Default"), target("NONE"), sign(false), grade_sign(150), grade_exec(150)
{
	std::cout << "|| AForm || Default constructor called" << std::endl;
}

AForm::AForm(std::string Name, std::string Target,int Grade_sign, int Grade_exec) : name(Name), target(Target),
sign(false), grade_sign(check_grade(Grade_sign)) ,grade_exec(check_grade(Grade_exec))
{
	std::cout << "|| AForm || Constructor called" << std::endl;
}

AForm::AForm(std::string Name, std::string Target,int Grade_sign, int Grade_exec, bool Sign) : name(Name), target(Target),
sign(Sign), grade_sign(check_grade(Grade_sign)) ,grade_exec(check_grade(Grade_exec))
{
	std::cout << "|| AForm || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

AForm::AForm(const AForm &org_obj) : name(org_obj.name), target(org_obj.target),
sign(org_obj.sign), grade_sign(org_obj.grade_sign) ,grade_exec(org_obj.grade_exec)
{
	std::cout << "|| AForm || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//   TO BE DONE !!!

AForm &AForm::operator=(const AForm &org_obj)
{
    std::cout << "|| AForm || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
		sign = org_obj.sign;
	return (*this);
}

//----------------------------Destructors-----------------------------//

AForm::~AForm()
{
	std::cout << "|| AForm || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

const std::string &AForm::getName() const
{
	return (name);
}

std::string AForm::getTarget() const
{
	return (target);
}

bool    AForm::getSign() const
{
    return (sign);
}

void    AForm::setSign(bool Sign)
{
    sign = Sign;
}

const int &AForm::getGrade_sign() const
{
	return (grade_sign);
}

const int &AForm::getGrade_exec() const
{
	return (grade_exec);
}

int AForm::check_grade(int Grade)
{
	if (Grade < 1)
		throw AForm::GradeTooHighException();
	else if (Grade > 150)
		throw AForm::GradeTooLowException();
	else
		return (Grade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low\n";
}

const char* AForm::ErrorExecuteException::what() const throw()
{
	return "Error Executing !!! Check Sign and Grade Again";
}

void    AForm::beSigned(Bureaucrat &obj)
{
    if (sign)
        std::cout << "AForm has been already signed !!!" << std::endl;
    else if (obj.getGrade() <= getGrade_sign())
        sign = true;
    else
        throw AForm::GradeTooLowException();
}

void	AForm::ft_error(std::string Error)
{
	std::cout << Error << std::endl;
}