/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:36:32 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/13 11:03:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
	int	fix_num;
	static const int fractional_bits;

	public:

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
	Fixed();
	Fixed(const Fixed &org_obj);
	Fixed &operator=(const Fixed &org_obj);
	~Fixed();
	
};

#endif
