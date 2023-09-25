/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:36:32 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/12 10:07:16 by idabligi         ###   ########.fr       */
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
	Fixed &operator=(const Fixed &org_obj);
	~Fixed();
	
};

std::ostream& operator<<(std::ostream &cout, const Fixed &A);

#endif
