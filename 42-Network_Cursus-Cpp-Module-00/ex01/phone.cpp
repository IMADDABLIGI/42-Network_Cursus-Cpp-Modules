/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 09:38:52 by idabligi          #+#    #+#             */
/*   Updated: 2023/08/17 15:34:38 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
//-----------------------------------------------------------------------------------//

std::string	PhoneBook::getinput(int c)
{
	std::string input;
	while (!std::cin.eof())
	{
		std::getline(std::cin, input);

		if (!input.empty()) 
				return (input);
		else if (c)
			std::cout << "Please enter something." << std::endl;
    }
	exit(1);
}

//-----------------------------------------------------------------------------------//

void	PhoneBook::addcontact(int i)
{
	std::string input;

	std::cout << "--------ADDING CONTACT----------" << std::endl;
	
	std::cout << "first name : ";
	input = getinput(1);
	setcontactfirstname(input, i);
	std::cout << "last name : ";
	input = getinput(1);
	setcontactlastname(input, i);
	std::cout << "nickname : ";
	input = getinput(1);
	setcontactnickname(input, i);
	std::cout << "phone number : ";
	input = getinput(1);
	setcontactnmr(input, i);
	std::cout << "darkest secret : ";
	input = getinput(1);
	setcontactdarksct(input, i);
}

//-----------------------------------------------------------------------------------//

void	ft_write_bigname(std::string str)
{
	int j = 0;
	while (j < 9)
	{
		std::cout << str[j];
		j++;
	}
	std::cout << ".";
}

//-----------------------------------------------------------------------------------//

void	PhoneBook::getlist()
{
	int i = 0;

	std::cout <<  "---------- ---------- ---------- ----------|\n";
	std::cout <<  "     index|first name| last name|  nickname|\n";
	std::cout <<  "---------- ---------- ---------- ----------|\n";
	while (i < 8)
	{
		std::cout << std::setw(10) << (i + 1) << "|";
		if (getcontactfirstname(i).length() <= 10)
			std::cout << std::setw(10) << getcontactfirstname(i);
		else
			ft_write_bigname(getcontactfirstname(i));
		std::cout << "|";
		if (getcontactlastname(i).length() <= 10)
			std::cout << std::setw(10) << getcontactlastname(i);
		else
			ft_write_bigname(getcontactlastname(i));
		std::cout << "|";
		if (getcontactnickname(i).length() <= 10)
			std::cout << std::setw(10) << getcontactnickname(i);
		else
			ft_write_bigname(getcontactnickname(i));
		std::cout << "|\n";
		i++;
	}
	std::cout <<  "-------------------------------------------|\n";
}

//-----------------------------------------------------------------------------------//

void	PhoneBook::getcontact()
{
	int index;
	std::string str;

	std::cout << "index >> ";
	try
	{
		std::getline(std::cin, str);
		index = std::stoi(str);
	}
	catch (const std::invalid_argument e){
        std::cout << "Numeric Argumens Only !" << std::endl;return ;}
	catch (const std::out_of_range e) {
        std::cout << "Index is Out of range !" << std::endl;return ;}
	if (index >= 1 && index <= 8)
	{
		std::cout << "* first name     : " + getcontactfirstname(index - 1) << std::endl;
		std::cout << "* last name      : " + getcontactlastname(index - 1) << std::endl;
		std::cout << "* nick name      : " + getcontactnickname(index - 1) << std::endl;
		std::cout << "* phone number   : " + getcontactnmr(index - 1) << std::endl;
		std::cout << "* darkest secret : " + getcontactdarksct(index - 1) << std::endl;
	}
	else
		std::cout << "the Given index is not on the list !" << std::endl;
}

//-----------------------------------------------------------------------------------//

int main()
{
	PhoneBook c;
	std::string input;
	int i = 0;

	while (1)
	{
		std::cout << ">> ";
		input = c.getinput(0);
		if (input == "ADD")
		{
			if (i > 7)
				i = 0;
			c.addcontact(i);
			i++;
		}
		else if (input == "SEARCH")
		{
			c.getlist();
			c.getcontact();
		}
		else if (input == "EXIT")
			exit (0);
	}
}
