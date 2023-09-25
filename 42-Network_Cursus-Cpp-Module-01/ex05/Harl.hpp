/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:30:58 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/23 17:19:42 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>


class Harl
{
	private:
		void info( void );
		void warning( void );
		void error( void );
		void debug( void );
	public:
		void complain( std::string level );
};

#endif