/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:41:10 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:34:06 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Setting Values
void Contact::setfirstname(std::string x)
{firstname = x;}
void Contact::setlastname(std::string x)
{lastname = x;}
void Contact::setnickname(std::string x)
{nickname = x;}
void Contact::setnmr(std::string x)
{phone_nmr = x;}
void Contact::setdarksct(std::string x)
{dark_scrt = x;}

//Getting Values
std::string Contact::getfirstname()
{return (firstname);}
std::string Contact::getlastname()
{return (lastname);}
std::string Contact::getnickname()
{return (nickname);}
std::string Contact::getnmr()
{return (phone_nmr);}
std::string Contact::getdarksct()
{return (dark_scrt);}
