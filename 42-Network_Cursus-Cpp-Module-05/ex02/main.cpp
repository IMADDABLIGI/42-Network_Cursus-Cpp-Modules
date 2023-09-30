/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 11:47:36 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main()
{
    try
    {
        Bureaucrat A("IMAD", 138);
        AForm *ptr1 = new ShrubberyCreationForm("HEAD");
        // ptr1->beSigned(A);
        std::cout << *ptr1;
        ptr1->execute(A);
        delete ptr1;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
