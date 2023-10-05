/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:35:34 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/05 16:42:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void    ScalarConverter::intconvert(std::string str)
{
    int num = atoi(str.c_str());
    
    std::cout << "char: " << "Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    std::cout << "float: " << static_cast <float> (num) << ".0f" << std::endl;
    std::cout << "double: " << static_cast <double> (num) << ".0" << std::endl;
}

void    ScalarConverter::floatconvert(std::string str)
{
    // float num = atof(str.c_str());
    
    std::cout << "char: " << str << std::endl;
    // std::cout << "int: " << num << std::endl;
    // std::cout << "float: " << static_cast <float> (num) << ".0f" << std::endl;
    // std::cout << "double: " << static_cast <double> (num) << ".0" << std::endl;
}

void    ScalarConverter::doubleconvert(std::string str)
{
    std::cout << + "DOUBLE " + str << std::endl;
}

void    ScalarConverter::charconvert(std::string str)
{
    std::cout << "char: " << str[0] << std::endl;
    std::cout << "int: " << static_cast <int> (str[0]) << std::endl;
    std::cout << "float: " << static_cast <float> (str[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast <double> (str[0]) << ".0" << std::endl;
}

void    ScalarConverter::findconvert(std::string str)
{
    if (str[str.length()] == 'f')
    {
        floatconvert(str);
        return ;
    }
    for (size_t i = 0; i <= str.length(); i++)
    {
        if (str[i] == '.')
        {
            doubleconvert(str);
            return ;
        }
    }
    intconvert(str);
}

void    ScalarConverter::convert(std::string str)
{
    int num;
    std::istringstream iss(str);

    if (iss >> num)
        findconvert(str);
    else if (str.size() == 1)
        charconvert(str);
    else
        std::cout << "Error : Invalid Argument !!!" << std::endl;
}
