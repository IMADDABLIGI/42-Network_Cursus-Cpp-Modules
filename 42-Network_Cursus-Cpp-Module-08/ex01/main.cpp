/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:29:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/15 12:27:21 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        try
        {
            Span obj(200);
            for (int i=0; i < 100; i++)
                obj.addNumber(i);
            obj.addMAnyNumbers(150, 50);
            obj.checkSpanSize();
            std::cout << "ShortestSpan : " << obj.shortestSpan() << std::endl;
            std::cout << "LongestSpan : " << obj.longestSpan() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    { // Copy Assignment Operator
        Span A(50);
        A.addNumber(20);
        A.addNumber(2033);
        A.addNumber(20);
        Span B(1);
        B.addNumber(2);
        B = A;
        B.checkSpanSize();
    }
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return (0);
}