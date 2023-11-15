/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:51:44 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/15 12:11:25 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//----------------------------Constructors----------------------------//

Span::Span()
{
	std::cout << "|| Span || Default constructor called" << std::endl;
}

Span::Span(unsigned int size) : _size(size)
{
    vec.reserve(size);
	std::cout << "|| Span || Constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

Span::Span(const Span &org_obj)
{
	std::cout << "|| Span || Copy constructor called" << std::endl;
    this->vec.reserve(org_obj.vec.capacity());
    *this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Span &Span::operator=(const Span &org_obj)
{
    std::cout << "|| Span || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        this->_size = org_obj._size;
        this->vec = org_obj.vec;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Span::~Span()
{
	std::cout << "|| Span || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    Span::addNumber(int num)
{
    if (vec.capacity() == vec.size())
        throw Span::MaxSize();
    else
        vec.push_back(num);
}

int     Span::shortestSpan()
{
    int min = INT_MAX;
    int cal;
    if (vec.size() <= 1)
        throw Span::MaxSize();
    for (unsigned long x = 0; x < vec.size(); x++)
    {
        for (unsigned long y = x + 1; y < vec.size(); y++)
        {
            cal = std::abs(vec[x] - vec[y]);
            min = std::min(min, cal);
        }
    }
    return (min);
}

int     Span::longestSpan()
{
    int max = INT_MIN;
    int cal;
    if (vec.size() <= 1)
        throw Span::MaxSize();
    for (unsigned long x = 0; x < vec.size(); x++)
    {
        for (unsigned long y = x + 1; y < vec.size(); y++)
        {
            cal = std::abs(vec[x] - vec[y]);
            max = std::max(max, cal);
        }
    }
    return (max);
}

void    Span::addMAnyNumbers(int num, unsigned int size)
{
    if (size > (vec.capacity() - vec.size()))
        throw (Span::MaxSize());
    for (unsigned int i = 0; i < size; i++)
        vec.push_back(num++);
}

void     Span::checkSpanSize()
{
    std::cout << "Span Size : " << vec.size() << std::endl;
    std::cout << "Span Size left : " << vec.capacity() - vec.size() << std::endl;
}

const char* Span::MaxSize::what() const throw()
{
	return "Error : Container Size !";
}
