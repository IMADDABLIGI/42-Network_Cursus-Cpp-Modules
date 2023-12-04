/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:25 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/04 17:40:56 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//----------------------------Constructors----------------------------//

BitcoinExchange::BitcoinExchange()
{
	std::cout << "|| BitcoinExchange || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

BitcoinExchange::BitcoinExchange(const BitcoinExchange &org_obj)
{
	std::cout << "|| BitcoinExchange || Copy constructor called" << std::endl;
    *this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &org_obj)
{
    std::cout << "|| BitcoinExchange || Copy assignment operator called" << std::endl;
    if (this != &org_obj)
    {
        //
    }
	return (*this);
}

//----------------------------Destructors-----------------------------//

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "|| BitcoinExchange || Destructor called" << std::endl;
}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

void    BitcoinExchange::ft_error(std::string err)
{
    std::cout << err;
    exit (1);
}


BitcoinExchange::ErrorException::ErrorException(const char *err) : err_(err)
{}

const char *BitcoinExchange::ErrorException::what() const throw()
{
    return (err_);
}

void   BitcoinExchange::fillMap()
{
    std::ifstream data("data.csv");
    std::string line;

    if (!data.is_open())
        throw BitcoinExchange::ErrorException("Error opening database file !!!\n");
    if (!std::getline(data, line))
        throw BitcoinExchange::ErrorException("Error data file is empty !!!\n");
    while (std::getline(data, line))
    {
        key = line.substr(0, 10);
        value = atof(line.substr(11).c_str());
        this->map[key] = value;
    }
    for (std::map<std::string, float>::iterator it = map.begin(); it != map.end(); it++)
        std::cout << it->first << " | " << it->second << std::endl;
}