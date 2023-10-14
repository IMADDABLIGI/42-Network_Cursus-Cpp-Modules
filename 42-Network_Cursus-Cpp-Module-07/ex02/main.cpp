/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:04:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/14 11:19:04 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void    ff()
{
    system("leaks convert");
}

int main()
{
    atexit(ff);
    {
        Array<double> A;
        Array<int> D(5);
        int *ptr = D.getPtr();
        try
        { std::cout << D[0] << std::endl; }
        catch (std::exception &e)
        { std::cout << e.what() << std::endl; }
        std::cout << D.size() << std::endl;
        delete ptr;
    }
    {
        Array<unsigned int> C(50);
        unsigned int *ptr = C.getPtr(); 
        std::cout << C[5] << std::endl;
        std::cout << C.size() << std::endl;
        delete ptr;
    }
    return (0);
}
