/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 12:52:22 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:34:16 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string		firstname;
		std::string		lastname;
		std::string		nickname;
		std::string		phone_nmr;
		std::string		dark_scrt;


	public:
	//set
		void setfirstname(std::string x);
		void setlastname(std::string x);
		void setnickname(std::string x);
		void setnmr(std::string x);
		void setdarksct(std::string x);
		
	//get
		std::string getfirstname();
		std::string getlastname();
		std::string getnickname();
		std::string getnmr();
		std::string getdarksct();
};

#endif