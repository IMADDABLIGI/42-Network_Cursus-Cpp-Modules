/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:36:32 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/13 13:19:00 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
	int	fix_num;
	static const int fractional_bits;

	public:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &org_obj);
	
	static Fixed &min(Fixed &lfs, Fixed &rhs);
	static Fixed &max(Fixed &lfs, Fixed &rhs);
	static const Fixed &min(const Fixed &lfs, const Fixed &rhs);
	static const Fixed &max(const Fixed &lfs, const Fixed &rhs);
	
	Fixed &operator=(const Fixed &org_obj);
	
	Fixed operator+(const Fixed & rhs);
	Fixed operator-(const Fixed & rhs);
	Fixed operator*(const Fixed & rhs);
	Fixed operator/(const Fixed & rhs);

	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	
	bool operator<(const Fixed& rhs) const;
	bool operator>(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;
	
	~Fixed();

};

std::ostream& operator<<(std::ostream &cout, const Fixed &A);


#endif
