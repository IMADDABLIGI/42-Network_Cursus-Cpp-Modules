/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/09 14:31:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# define MAX_INT 2147483647
# define MIN_INT -2147483648


#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iomanip>



class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &org_obj);
        ScalarConverter &operator=(const ScalarConverter &org_obj);
        ~ScalarConverter();
    
        static void convert(std::string str);
        static void intconvert(std::string str);
        static void floatconvert(std::string str, int c);
        static void doubleconvert(std::string str, int c);
        static void charconvert(std::string str);
        static void findconvert(std::string str);
        static bool checkinf(std::string str);
        static bool checkzero(std::string str, size_t N);
        static bool checkpoint(double num);
        static bool isInt(std::string str);
        static bool isFloat(std::string str);
        static bool isDouble(std::string str);
};

#endif