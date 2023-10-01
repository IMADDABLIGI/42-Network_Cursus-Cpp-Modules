/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 13:11:47 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Testing for Form ShrubberyCreationForm; 
    {
        {
            Bureaucrat A("IMAD", 130);
            AForm *ptr1 = new ShrubberyCreationForm("ICE");
            try
            {
                // ptr1->beSigned(A);
                std::cout << *ptr1;
                ptr1->execute(A);
            }
            catch (std::exception &e)
            {
                std::cout << e.what();
            }
                delete ptr1;
        }
    }
    // Testing for Form RobotomyRequestForm; 
    // {
    //      {
    //         Bureaucrat A("IMAD", 69);
    //         AForm *ptr1 = new RobotomyRequestForm("ICE");
    //         try
    //         {
    //             ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //             ptr1->execute(A);
    //         }
    //         catch (std::exception &e)
    //         {
    //             std::cout << e.what();
    //         }
    //         delete ptr1;
    //     }
    // }
    // //Testing for Form PresidentialPardonForm;
    // {
    //    {
    //         Bureaucrat A("IMAD", 7);
    //         AForm *ptr1 = new PresidentialPardonForm("ICE");
    //         try
    //         {
    //             ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //         }
    //         catch (std::exception &e)
    //         {
    //             std::cout << e.what();
    //         }
    //         delete ptr1;
    //     }
    // }
    // {
    //     try
    //     {
    //         Bureaucrat B("Soldier", 5);
    //         PresidentialPardonForm C("DEMON");
    //         C.beSigned(B);
    //         B.executeForm(C);
    //     }
    //     catch(const std::exception& e)
    //     {
    //         std::cerr << e.what();
    //     }
    // }
    // { // Testing Copy Constructor
    //     ShrubberyCreationForm A("Daimond");
    //     ShrubberyCreationForm B(A);
    //     std::cout << B.getName() + " " + B.getTarget() + " " << B.getGrade_sign() << " " << B.getGrade_exec() << std::endl;
    // }
}
