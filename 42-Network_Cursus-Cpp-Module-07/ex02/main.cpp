/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:04:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/13 18:03:01 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<double> A;
    Array<int> D(0);
    try
    { std::cout << A[0]; }
    catch (std::exception &e)
    { std::cout << e.what() << std::endl; }
    std::cout << A.size() << std::endl;
    return (0);
}
