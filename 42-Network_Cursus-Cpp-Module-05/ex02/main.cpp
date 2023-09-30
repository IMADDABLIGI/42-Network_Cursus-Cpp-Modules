/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 18:19:06 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    
    // // Testing for Form ShrubberyCreationForm; 
    // {
    //     {
    //         try
    //         {
    //             Bureaucrat A("IMAD", 138);
    //             AForm *ptr1 = new ShrubberyCreationForm("ICE");
    //             // ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //             delete ptr1;
    //         }
    //         catch (std::exception &e)
    //         {
    //             std::cout << e.what();
    //         }
    //     }
    // }
    // // Testing for Form RobotomyRequestForm; 
    // {
    //      {
    //         try
    //         {
    //             Bureaucrat A("IMAD", 69);
    //             AForm *ptr1 = new RobotomyRequestForm("ICE");
    //             ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //             ptr1->execute(A);
    //             delete ptr1;
    //         }
    //         catch (std::exception &e)
    //         {
    //             std::cout << e.what();
    //         }
    //     }
    // }
    // //Testing for Form PresidentialPardonForm;
    // {
    //    {
    //         try
    //             {
    //                 Bureaucrat A("IMAD", 7);
    //                 AForm *ptr1 = new PresidentialPardonForm("ICE");
    //                 ptr1->beSigned(A);
    //                 std::cout << *ptr1;
    //                 ptr1->execute(A);
    //                 delete ptr1;
    //             }
    //             catch (std::exception &e)
    //             {
    //                 std::cout << e.what();
    //             }
    //     }
    // }
    {
        Bureaucrat B("Soldier", 5);
        PresidentialPardonForm C("DEMON");
        
        C.beSigned(B);
        B.executeForm(C);
    }
    // { // Testing Copy Constructor
    //     ShrubberyCreationForm A("Daimond");
    //     ShrubberyCreationForm B(A);
    //     std::cout << B.getName() + " " + B.getTarget() + " " << B.getGrade_sign() << " " << B.getGrade_exec() << std::endl;
    // }
}
