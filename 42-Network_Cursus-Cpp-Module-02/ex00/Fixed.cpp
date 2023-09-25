/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:38:42 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/13 11:03:30 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//--------------------------------------------------------------------//

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fix_num);
}

void Fixed::setRawBits( int const raw )
{
	fix_num = raw;
}

//--------------------------------------------------------------------//

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fix_num = 0;
}

Fixed::Fixed(const Fixed &org_obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = org_obj;
}

Fixed &Fixed::operator=(const Fixed &org_obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->getRawBits();
    if (this != &org_obj)
        fix_num = org_obj.fix_num;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
