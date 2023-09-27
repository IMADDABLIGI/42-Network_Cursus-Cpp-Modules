/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:36:28 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/27 15:29:54 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//----------------------------Constructors----------------------------//

Bureaucrat::Bureaucrat()
{
	std::cout << "|| Bureaucrat || Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name), grade(0)
{
	std::cout << "|| Bureaucrat || Constructor called" << std::endl;
	grade = check_grade(Grade);
}

//-----------------------Copy Constructor-----------------------------//

Bureaucrat::Bureaucrat(const Bureaucrat &org_obj) : name(org_obj.name), grade(org_obj.grade)
{
	std::cout << "|| Bureaucrat || Copy constructor called" << std::endl;
}

//-----------------------Copy assignmenet Operator--------------------//

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &org_obj)
{
    std::cout << "|| Bureaucrat || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
		grade = org_obj.grade;
	return (*this);
}

//----------------------------Destructors-----------------------------//

Bureaucrat::~Bureaucrat()
{
	std::cout << "|| Bureaucrat || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

int Bureaucrat::getGrade()
{
	return (grade);
}

const std::string Bureaucrat::getName()
{
	return (name);
}

int Bureaucrat::check_grade(int &Grade)
{
	if (Grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (Grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		return (Grade);
}

void	Bureaucrat::increment()
{
	grade--;
	std::cout << "Incrementing" << std::endl;
	check_grade(grade);
}

void	Bureaucrat::decrement()
{
	grade++;
	std::cout << "Decrementing" << std::endl;
	check_grade(grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too High\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low\n";
}

std::ostream &operator<<(std::ostream &cout, Bureaucrat &obj)
{
	cout << obj.getName() + ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (cout);
}
