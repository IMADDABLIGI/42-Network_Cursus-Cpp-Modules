/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:11:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/28 18:35:32 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//----------------------------Constructors----------------------------//

Form::Form() : name("Default"), sign(false), grade_sign(150), grade_exec(150)
{
	std::cout << "|| Form || Default constructor called" << std::endl;
}

Form::Form(std::string Name, int Grade_sign, int Grade_exec) : name(Name), sign(false),
grade_sign(check_grade(Grade_sign)) ,grade_exec(check_grade(Grade_exec))
{
	std::cout << "|| Form || Constructor called" << std::endl;
    sign = false;
}

//-----------------------Copy Constructor-----------------------------//

Form::Form(const Form &org_obj) : name(org_obj.name), sign(org_obj.sign),
grade_sign(org_obj.grade_sign) ,grade_exec(org_obj.grade_exec)
{
	std::cout << "|| Form || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//   TO BE DONE !!!

Form &Form::operator=(const Form &org_obj)
{
    std::cout << "|| Form || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
		sign = org_obj.sign;
	return (*this);
}

//----------------------------Destructors-----------------------------//

Form::~Form()
{
	std::cout << "|| Form || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

const std::string &Form::getName()
{
	return (name);
}

bool    Form::getSign()
{
    return (sign);
}

const int &Form::getGrade_sign() const
{
	return (grade_sign);
}

const int &Form::getGrade_exec() const
{
	return (grade_exec);
}

int Form::check_grade(int Grade)
{
	if (Grade < 1)
		throw Form::GradeTooHighException();
	else if (Grade > 150)
		throw Form::GradeTooLowException();
	else
		return (Grade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low\n";
}

std::ostream &operator<<(std::ostream &cout, Form &obj)
{
    if (obj.getSign())
    {
	    cout << "The Form : " + obj.getName() + " | Grade required to sign it : " << obj.getGrade_sign();
        cout << " | Grade required to execute it " << obj.getGrade_exec() << " is signed." << std::endl;
    }
    else
    {
	    cout << "The Form : " + obj.getName() + " | Grade required to sign it : " << obj.getGrade_sign();
        cout << " | Grade required to execute it " << obj.getGrade_exec() << " is not signed." << std::endl;
    }
	return (cout);
}

void    Form::beSigned(Bureaucrat &obj)
{
    if (sign)
        std::cout << "Form has already been signed !!!" << std::endl;
    else if (obj.getGrade() <= getGrade_sign())
        sign = true;
    else
        throw Form::GradeTooLowException();
}