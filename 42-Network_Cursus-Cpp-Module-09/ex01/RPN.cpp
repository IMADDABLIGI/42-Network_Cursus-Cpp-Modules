/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:52:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/17 14:20:42 by idabligi         ###   ########.fr       */
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
        this->st = org_obj.st;
	return (*this);
}

//----------------------------Destructors-----------------------------//

RPN::~RPN()
{}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

int     RPN::top()
{
    if (this->st.empty())
        return (std::cout << "Error stack is empty" << std::endl, 0);
    return (st.top());
}

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

//--------------------------------------------------EXECUTION--------------------------------------------------//

void    abort(){
    std::cout << "Error" << std::endl;
    exit (1);
}

void    RPN::calculate(std::string c)
{
    float val1, val2;

    if (this->st.size() < 2)
        abort();
    val1 = st.top();
    st.pop();
    val2 = st.top();
    st.pop();
    if (c == "+")
        st.push(val2 + val1);
    else if (c == "-")
        st.push(val2 - val1);
    else if (c == "*")
        st.push(val2 * val1);
    else if (c == "/")
        st.push(val2 / val1);
}

bool    RPN::execute(std::string str)
{
    std::stringstream sstr(str);
    std::string c;

    while (!sstr.eof())
    {
        if (!(sstr >> c))
            return (std::cout << "Error" << std::endl, false);
        if  (c == "+" || c == "-" || c == "*" || c == "/")
            calculate(c);
        else
            this->st.push(std::atoi(c.c_str()));
    }
    if (st.size() != 1)
            return (std::cout << "Error" << std::endl, false);
    std::cout << st.top() << std::endl;
    return true;
}
