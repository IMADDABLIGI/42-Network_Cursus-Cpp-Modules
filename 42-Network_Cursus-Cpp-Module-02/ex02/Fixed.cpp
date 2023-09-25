/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:38:42 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/13 13:19:17 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//--------------------------------------------------------------------//
//----------------------------Constructors----------------------------//
//--------------------------------------------------------------------//

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	fix_num = 0;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	fix_num = num * std::pow(2, fractional_bits);
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	fix_num = roundf(num * std::pow(2, fractional_bits));
}

//-----------------------Copy Constructor-----------------------------//

Fixed::Fixed(const Fixed &org_obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Fixed &Fixed::operator=(const Fixed &org_obj)
{
    if (this != &org_obj)
    {
        // std::cout << "Copy assignment operator called" << std::endl;
        fix_num = org_obj.fix_num;
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//


int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (fix_num);
}

void Fixed::setRawBits( int const raw )
{
	fix_num = raw;
}

float Fixed::toFloat( void ) const
{
	return (fix_num * std::pow(2, -fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (fix_num * std::pow(2, -fractional_bits));
}

//-- max min --//

Fixed &Fixed::min(Fixed &lfs, Fixed &rhs)
{
	if (lfs < rhs)
		return (lfs);
	return (rhs);
}

Fixed &Fixed::max(Fixed &lfs, Fixed &rhs)
{
	if (lfs > rhs)
		return (lfs);
	return (rhs);
}

const Fixed &Fixed::min(const Fixed &lfs, const Fixed &rhs)
{
	if (lfs < rhs)
		return (lfs);
	return (rhs);
}

const Fixed &Fixed::max(const Fixed &lfs, const Fixed &rhs)
{
	if (lfs > rhs)
		return (lfs);
	return (rhs);
}

//-- Insert Operator --//

std::ostream& operator<<(std::ostream &cout, const Fixed &A)
{
	cout << A.toFloat();
	return (cout);
}

//-- Arithmetic Operatos --//

Fixed Fixed::operator+(const Fixed & rhs)
{
	Fixed obj(this->toFloat() + rhs.toFloat());
	return (obj);
}

Fixed Fixed::operator-(const Fixed & rhs)
{
	Fixed obj(this->toFloat() - rhs.toFloat());
	return (obj);
}

Fixed Fixed::operator*(const Fixed & rhs)
{
	Fixed obj(this->toFloat() * rhs.toFloat());
	return (obj);
}

Fixed Fixed::operator/(const Fixed & rhs)
{
	Fixed obj(this->toFloat() / rhs.toFloat());
	return (obj);
}

//-- 4 Increment/Decrement Operators --//

Fixed Fixed::operator++(int) // (A++)
{
	Fixed tmp = *this;

	this->fix_num += 1;
	return (tmp);
}

Fixed &Fixed::operator++() // (++A)
{
	this->fix_num += 1;
	return (*this);
}

Fixed Fixed::operator--(int) // (A--)
{
	Fixed tmp = *this;

	this->fix_num -= 1;
	return (tmp);
}

Fixed &Fixed::operator--() // (--A)
{
	this->fix_num -= 1;
	return (*this);
}

//-- 6 Comparaison Operators --//

bool Fixed::operator<(const Fixed& rhs) const
{
	if (fix_num < rhs.fix_num)
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& rhs) const
{
	if (fix_num > rhs.fix_num)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& rhs) const
{
	if (fix_num >= rhs.fix_num)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& rhs) const
{
	if (fix_num <= rhs.fix_num)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& rhs) const
{
	if (fix_num == rhs.fix_num)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& rhs) const
{
	if (fix_num != rhs.fix_num)
		return (true);
	return (false);
}

//--------------------------------------------------------------------//
