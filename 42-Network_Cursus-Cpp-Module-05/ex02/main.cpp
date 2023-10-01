/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 15:06:48 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    { // Testing for Form ShrubberyCreationForm; 
        {
            AForm *ptr1 = new ShrubberyCreationForm("ICE");
            try{
                Bureaucrat A("IMAD", 130);
                // ptr1->beSigned(A);
                std::cout << *ptr1;
                ptr1->execute(A);
            }
            catch (std::exception &e){
                std::cout << e.what();
            }
                delete ptr1;
        }
    }
    // { // Testing for Form RobotomyRequestForm; 
    //      {
    //         AForm *ptr1 = new RobotomyRequestForm("ICE");
    //         try{
    //             Bureaucrat A("IMAD", 69);
    //             ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //             ptr1->execute(A);
    //         }
    //         catch (std::exception &e){
    //             std::cout << e.what();
    //         }
    //         delete ptr1;
    //     }
    // }
    // { //Testing for Form PresidentialPardonForm;
    //    {
    //         AForm *ptr1 = new PresidentialPardonForm("ICE");
    //         try{
    //             Bureaucrat A("IMAD", 7);
    //             ptr1->beSigned(A);
    //             std::cout << *ptr1;
    //             ptr1->execute(A);
    //         }
    //         catch (std::exception &e){
    //             std::cout << e.what();
    //         }
    //         delete ptr1;
    //     }
    // }
    // { // Testing executeForm();
    //     try{
    //         Bureaucrat B("Soldier", 5);
    //         PresidentialPardonForm C("DEMON");
    //         C.beSigned(B);
    //         B.executeForm(C);
    //     }
    //     catch(const std::exception& e){
    //         std::cerr << e.what();
    //     }
    // }
    // { // Testing Copy Constructor
    //     ShrubberyCreationForm A("Daimond");
    //     ShrubberyCreationForm B(A);
    //     std::cout << B.getName() + " " + B.getTarget() + " " << B.getGrade_sign() << " " << B.getGrade_exec() << std::endl;
    // }
}
