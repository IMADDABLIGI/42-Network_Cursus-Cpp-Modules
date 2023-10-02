/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/02 14:22:13 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  { // Testing ShrubberyCreationForm;
      Intern A;
      AForm *ptr = NULL;
      try
      {
        Bureaucrat B("IMAD", 2);
        ptr = A.makeForm("shrubbery creation", "HOME");
        ptr->beSigned(B);
        std::cout << *ptr;
        ptr->execute(B);
      }
      catch(const std::exception& e)
      {
        std::cout << e.what();
      }
      delete ptr;
    }
  { // Testing RobotomyRequestForm;
      Intern A;
      AForm *ptr = NULL;
      try
      {
        Bureaucrat B("IMAD", 2);
        ptr = A.makeForm("robotomy request", "Bender");
        ptr->beSigned(B);
        std::cout << *ptr;
        ptr->execute(B);
        ptr->execute(B);
      }
      catch(const std::exception& e)
      {
        std::cout << e.what();
      }
      delete ptr;
    }
  { // Testing PresidentialPardonForm;
      Intern A;
      AForm *ptr = NULL;
      try
      {
        Bureaucrat B("IMAD", 2);
        ptr = A.makeForm("presidential pardon", "Bender");
        ptr->beSigned(B);
        std::cout << *ptr;
        ptr->execute(B);
      }
      catch(const std::exception& e)
      {
        std::cout << e.what();
      }
      delete ptr;
    }
}