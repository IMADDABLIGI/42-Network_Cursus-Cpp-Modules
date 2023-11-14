/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:04:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/14 11:27:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename A>
void    printing(A const &X)
{
    std::cout << X << std::endl;
}

void    toUpperPrint(std::string const &X)
{
    for(size_t i = 0; i < X.length(); i++)
    {
        if (X[i] >= 97 && X[i] <= 122)
            std::cout << static_cast<char>(X[i] - 32);
        else
            std::cout << X[i];
    }
}

int main()
{
    {
        int arr[] = {20, 50, 10, 5, 77};
        iter(arr, 5, printing);
    }
    {
        std::string str[] = {"hello ", ",how are you \n", "C++ is BETTER than C\n"};
        iter(str, 3, toUpperPrint);
    }
    return (0);
}