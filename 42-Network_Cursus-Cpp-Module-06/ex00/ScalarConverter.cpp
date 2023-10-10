/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:35:34 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/09 15:36:50 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//----------------------------Constructor-----------------------------//

ScalarConverter::ScalarConverter(){
    std::cout << "|| ScalarConverter || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

ScalarConverter::ScalarConverter(const ScalarConverter &org_obj){
	std::cout << "|| ScalarConverter || Copy constructor called" << std::endl;
    (void) org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &org_obj)
{
    std::cout << "|| ScalarConverter || Copy assignment operator called" << std::endl;
    (void) org_obj;
	return (*this);
}

//----------------------------Destructors-----------------------------//

ScalarConverter::~ScalarConverter()
{
	std::cout << "|| ScalarConverter || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//

void    ScalarConverter::intconvert(std::string str)
{
    int num = atoi(str.c_str());
    if (num >= 32 && num <= 127)
        std::cout << "char: " << static_cast <char> (num) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << num << std::endl;
    if (checkpoint(static_cast <double> (num)))
    {
        std::cout << "float: " << static_cast <float> (num) << "f" << std::endl;
        std::cout << "double: " << static_cast <double> (num) << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast <float> (num) << ".0f" << std::endl;
        std::cout << "double: " << static_cast <double> (num) << ".0" << std::endl;
    }
}

void    ScalarConverter::floatconvert(std::string str, int c)
{
    float num = atof(str.c_str());
    std::string s;

    std::cout << "char: impossible" << std::endl;
    if (c && num <= MAX_INT && num >= MIN_INT)
        std::cout << "int: " << static_cast <int> (num) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (checkzero(str, 1))
        s = ".0";
    std::cout << "float: " << num << s << "f" << std::endl;
    std::cout << "double: " << static_cast <double> (num) << s << std::endl;
}

void    ScalarConverter::doubleconvert(std::string str, int c)
{
    double num = atof(str.c_str());
    std::string s;

    std::cout << "char: impossible" << std::endl;
    if (c && num <= MAX_INT && num >= MIN_INT)
        std::cout << "int: " << static_cast <int> (num) << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
    if (checkzero(str, 0))
        s = ".0";
    std::cout << "float: " << static_cast <float> (num) << s << "f" << std::endl;
    std::cout << "double: " << num << s << std::endl;
}

void    ScalarConverter::charconvert(std::string str)
{
    std::cout << "char: " << str[0] << std::endl;
    std::cout << "int: " << static_cast <int> (str[0]) << std::endl;
    std::cout << "float: " << static_cast <float> (str[0]) << ".0f" << std::endl;
    std::cout << "double: " << static_cast <double> (str[0]) << ".0" << std::endl;
}

//-----------------------------------------------------------------------------------------//

bool ScalarConverter::checkinf(std::string str)
{
    if (str == "+inf" || str == "-inf" || str == "nan")
    {
        doubleconvert(str, 0);
        return true;
    }
    else if (str == "+inff" || str == "-inff" || str == "nanf")
    {
        floatconvert(str, 0);
        return true;
    }
    else
        return false;
}

//-----------------------------------------------------------------------------------------//

bool    ScalarConverter::isInt(std::string str)
{
    std::stringstream strn(str);
    int check;
    return (strn >> check) && strn.eof();
}

bool    ScalarConverter::isDouble(std::string str)
{
    std::stringstream strn(str);
    double num;
    return (strn >> num) && strn.eof();
}

bool    ScalarConverter::isFloat(std::string str)
{
    if (str[str.length() - 1] == 'f')
        return (true);
    else 
        return (false);
}

//-----------------------------------------------------------------------------------------//

void    ScalarConverter::convert(std::string str)
{
    if (checkinf(str))
        return ;
    if (isInt(str))
        intconvert(str);
    else if (isFloat(str))
        floatconvert(str, 1);
    else if (isDouble(str))
        doubleconvert(str, 1);
    else if (str.size() == 1)
        charconvert(str);
    else
        std::cout << "Error : Invalid Argument !!!" << std::endl;
}

//--------------------------------------------------//

bool ScalarConverter::checkzero(std::string str, size_t N)
{
    size_t i = 0;
    size_t pos = str.find('.');

    for (i = pos + 1; i < (str.length() - N); i++)
        if (str[i] != '0')
            return (false);
    return (true);
}

bool ScalarConverter::checkpoint(double num)
{
    std::stringstream ss;
    std::string str;
    ss << num;
    str = ss.str();
    for (size_t i = 0; i < str.length(); i++)
        if (str[i] == '.')
            return (true);
    return (false);
}
