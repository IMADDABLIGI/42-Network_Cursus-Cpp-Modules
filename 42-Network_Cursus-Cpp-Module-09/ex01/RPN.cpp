/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:52:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/06 13:10:54 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

//----------------------------Constructors----------------------------//

RPN::RPN()
{}

//-----------------------Copy Constructor-----------------------------//

RPN::RPN(const RPN &org_obj)
{
    *this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

RPN &RPN::operator=(const RPN &org_obj)
{
    if (this != &org_obj)
    {
        
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

RPN::~RPN()
{}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

bool checkvalue(std::string vl)
{
    std::string num[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    if  ((vl == "+") || (vl == "-") || (vl == "*") || (vl == "/"))
            return true;
    for (int i = 0; i < 10; i++)
        if (num[i] == vl)
            return true;
    return false;
}

bool    RPN::parse(std::string str)
{
    std::stringstream sstr(str);
    std::string check;
    while (!sstr.eof())
    {
        if (!(sstr >> check))
            return (std::cout << "Error" << std::endl, false);
        if (!checkvalue(check))
            return (std::cout << "Error" << std::endl, false);
        std::cout << check << std::endl;
    }
    return true;
}