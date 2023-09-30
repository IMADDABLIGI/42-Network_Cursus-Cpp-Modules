/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 13:47:23 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    
    // Testing for Form ShrubberyCreationForm; 
    // {
    //     {
    //         try
    //         {
    //             Bureaucrat A("IMAD", 130);
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
    //     {
    //         ShrubberyCreationForm A("Daimond");
    //         ShrubberyCreationForm B(A);
    //         std::cout << B.getName() + " " + B.getTarget() + " " << B.getGrade_sign() << " " << B.getGrade_exec() << std::endl;
    //     }
    // }
    // Testing for Form RobotomyRequestForm; 
    {
         {
            try
            {
                Bureaucrat A("IMAD", 73);
                AForm *ptr1 = new RobotomyRequestForm("ICE");
                ptr1->beSigned(A);
                std::cout << *ptr1;
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                ptr1->execute(A);
                delete ptr1;
            }
            catch (std::exception &e)
            {
                std::cout << e.what();
            }
        }
    }
}
