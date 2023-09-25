/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:58:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/25 08:34:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

	std::cout << "The memory address of the string variable : " << &str << std::endl;
	std::cout << "The memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      : " << &stringREF << std::endl;
	//--------------------------------------------------------------------------------------//
	std::cout << "|------------------------------------------------------------|\n";
	//--------------------------------------------------------------------------------------//
	std::cout << "The value of the string variable  : " + str << std::endl;
	std::cout << "The value pointed to by stringPTR : " + *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " + stringREF << std::endl;
}
