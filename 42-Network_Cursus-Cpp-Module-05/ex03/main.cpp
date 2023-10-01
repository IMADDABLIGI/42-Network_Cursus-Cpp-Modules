/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 20:20:12 by idabligi         ###   ########.fr       */
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
      Intern A;
      AForm *ptr = NULL;
      try
      {
        Bureaucrat B("IMAD", 2);
        ptr = A.makeForm("robotomy request", "Bender");
        ptr->beSigned(B);
        ptr->execute(B);
        ptr->execute(B);
      }
      catch(const std::exception& e)
      {
        std::cerr << e.what();
      }
      delete ptr;
}
