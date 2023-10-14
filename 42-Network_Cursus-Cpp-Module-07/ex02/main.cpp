/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:04:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/14 13:14:05 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    {
        Array<int> A;
        Array<double> D(5);
        try
        { std::cout << D[0] << std::endl; }
        catch (std::exception &e)
        { std::cout << e.what() << std::endl; }
        std::cout << D.size() << std::endl;
    }
    // {
    //     Array<float> F(5);
    //     Array<float> J(F);
    //     std::cout << J.size() << std::endl;
    // }
    // {
    //     Array<int> I(7);
    //     Array<int> N(50);
    //     N = I;
    //     std::cout << N.size() << std::endl;
    // }
    return (0);
}
