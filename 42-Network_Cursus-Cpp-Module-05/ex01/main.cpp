/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/28 13:20:25 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    {
        try {
            Bureaucrat A("Soldier", 500);
            std::cout << A;
        }
        catch (std::exception &e)
        {
            std::cout << e.what();
        }
    }
    {
        try {
            Bureaucrat A("Ghost", 149);
            std::cout << A;
            A.decrement();
            std::cout << A;
            A.decrement();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what();
        }
    }
    {
        try {
            Bureaucrat A("Maverick", 2);
            std::cout << A;
            A.increment();
            std::cout << A;
            A.increment();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what();
        }
    }
    //-----------------Testing Constructor -----------------//
    {
        Bureaucrat A("Freax", 69);
        Bureaucrat B(A);
        std::cout << B;
    }
    //-----------------Testing Copy Assignment Operator ------------------//
    {
        Bureaucrat E("Freax", 69);
        Bureaucrat C("Maverick", 55);
        C = E;
        std::cout << C;
    }
}
