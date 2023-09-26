/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:33:07 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:34:43 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//Setting Values
void PhoneBook::setcontactfirstname(std::string x, int i)
{ c[i].setfirstname(x); }

void PhoneBook::setcontactlastname(std::string x, int i)
{ c[i].setlastname(x); }

void PhoneBook::setcontactnickname(std::string x, int i)
{ c[i].setnickname(x); }

void PhoneBook::setcontactnmr(std::string x, int i)
{ c[i].setnmr(x); }

void PhoneBook::setcontactdarksct(std::string x, int i)
{ c[i].setdarksct(x); }



//Getting Values
std::string PhoneBook::getcontactfirstname(int i)
{ return (c[i].getfirstname()); }

std::string	PhoneBook::getcontactlastname(int i)
{ return (c[i].getlastname()); }

std::string	PhoneBook::getcontactnickname(int i)
{ return (c[i].getnickname()); }

std::string	PhoneBook::getcontactnmr(int i)
{ return (c[i].getnmr()); }

std::string	PhoneBook::getcontactdarksct(int i)
{ return (c[i].getdarksct()); }