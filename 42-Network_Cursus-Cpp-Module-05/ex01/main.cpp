/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/02 12:55:11 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    { // Testing Constructor and beSigned();
        try
        {
            Form A("CDD", 10, 10);
            Bureaucrat B("Ghost", 5);
            std::cout << A;
            A.beSigned(B);
            std::cout << A;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what();
        }
    }
    { // Testing signForm();
        Form A("DAIMOND", 80, 50);
        Bureaucrat B("Maverick", 70);
        std::cout << A;
        B.signForm(A);
        std::cout << A;
    }
    {// Testing Copy Constructor
        Form J("Silver", 20, 20);
        Bureaucrat K("Maverick", 1);
        J.beSigned(K);
        Form L(J);
        std::cout << L;
    }
    {// Testing Copy assignment operator
        Form A("Silver", 20, 20);
        Bureaucrat C("Maverick", 20);
        A.beSigned(C);
        Form B;
        std::cout << B;
        B = A;
        std::cout << B;
    }
}
