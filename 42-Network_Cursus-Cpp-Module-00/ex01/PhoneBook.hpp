/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:39:34 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:34:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"


class PhoneBook
{
	private:
		Contact c[8];
	
	public:
		//set
		void setcontactfirstname(std::string x, int i);
		void setcontactlastname(std::string x, int i);
		void setcontactnickname(std::string x, int i);
		void setcontactnmr(std::string x, int i);
		void setcontactdarksct(std::string x, int i);

		void		addcontact(int i);
		void		getlist();
		void		getcontact();
		std::string	getinput(int c);
	
	
		//get 
		std::string	getcontactfirstname(int i);
		std::string	getcontactlastname(int i);
		std::string	getcontactnickname(int i);
		std::string	getcontactnmr(int i);
		std::string	getcontactdarksct(int i);
};

#endif