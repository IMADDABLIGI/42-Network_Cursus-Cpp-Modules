/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:32:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/05 16:41:07 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>


class ScalarConverter
{
    public:
        static void convert(std::string str);
        static void findconvert(std::string str);
        static void intconvert(std::string str);
        static void charconvert(std::string str);
        static void floatconvert(std::string str);
        static void doubleconvert(std::string str);
};

#endif