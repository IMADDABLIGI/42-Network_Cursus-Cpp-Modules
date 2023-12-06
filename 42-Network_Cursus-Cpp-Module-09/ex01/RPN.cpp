/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:52:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/06 15:10:50 by idabligi         ###   ########.fr       */
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
        this->st = org_obj.st;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

RPN::~RPN()
{}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

//--------------------------------------------------PARSING--------------------------------------------------//

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
    }
    return true;
}

//----------------------------------------------------------------------------------------------------------//

void    abort(){
    std::cout << "Error" << std::endl;
    exit (1);
}

void    RPN::calculate(std::string c)
{
    int val1, val2;
    if (this->st.size() < 2)
        abort();
    val1 = st.top();
    st.pop();
    val2 = st.top();
    st.pop();
    if (c == "+")
        st.push(val2 + val1);
    if (c == "-")
        st.push(val2 - val1);
    if (c == "*")
        st.push(val2 * val1);
    if (c == "/")
        st.push(val2 / val1);
}

bool    RPN::execute(std::string str)
{
    std::stringstream sstr(str);
    std::string c;

    while (!sstr.eof())
    {
        sstr >> c;
        if  (c == "+" || c == "-" || c == "*" || c == "/")
            calculate(c);
        else
            this->st.push(std::atoi(c.c_str()));
    }
    std::cout << st.top() << std::endl;
    return true;
}
