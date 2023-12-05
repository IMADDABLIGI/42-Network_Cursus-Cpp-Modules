/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:25 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/05 14:20:32 by idabligi         ###   ########.fr       */
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

void    BitcoinExchange::ft_error(std::string err){
    std::cout << err;
    exit (1);
}


BitcoinExchange::ErrorException::ErrorException(const char *err) : err_(err)
{}

const char *BitcoinExchange::ErrorException::what() const throw(){
    return (err_);}

//--------------------------------------------------------------------------------------------------//

void   BitcoinExchange::getData()
{
    std::ifstream data("data.csv");
    std::string line;

    if (!data.is_open())
        throw BitcoinExchange::ErrorException("Error: opening Database file !!!\n");
    if (!std::getline(data, line))
        throw BitcoinExchange::ErrorException("Error: data file is empty !!!\n");
    while (std::getline(data, line))
    {
        key = line.substr(0, 10);
        value = atof(line.substr(11).c_str());
        this->map[key] = value;
    }
    // for (std::map<std::string, float>::iterator it = map.begin(); it != map.end(); it++)
    //     std::cout << it->first << " | " << it->second << std::endl;
}

//--------------------------------------------------------------------------------------------------//

bool    checkDate(std::string date)
{
    std::stringstream sstr(date);
    int year, month, day;
    char hp1, hp2;
    
    if (!(sstr >> year >> hp1 >> month >> hp2 >> day))
        return false;
    if (sstr.fail() || hp1 != '-' || hp2 != '-')
        return false;
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if (((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        || ((month == 2) && (day > 28)))
        return false;
    return true;
}

bool    BitcoinExchange::parseLine(std::string line)
{
    std::stringstream sstr(line);
    std::string str;
    sstr >> str;
    if (!checkDate(str))
    {
        std::cout << "Error: : bad input => " << str << std::endl;
        return false;   
    }
    else
        std::cout << "Valid Date : " << str << std::endl;
    return true;
}


//--------------------------------------------------------------------------------------------------//


void    BitcoinExchange::execute(std::string arg)
{
    std::ifstream input(arg);
    std::string line;
    if (!input.is_open())
        throw BitcoinExchange::ErrorException("Error: opening input file !!!\n");
    if (!std::getline(input, line))
        throw BitcoinExchange::ErrorException("Error: input file is empty !!!\n");       
    while (std::getline(input, line))
    {
        if (!this->parseLine(line))
            continue;
        else
            continue;
    }
}











// std::stringstream iss(date);

//     int year, month, day;
//     char delimiter1, delimiter2;

//     // Attempt to extract the components of the date
//     if (!(iss >> year >> delimiter1 >> month >> delimiter2 >> day))
//     {
//         std::cout << year << " " << delimiter1 << " " << month << " " << delimiter2 << " " << day << std::endl;   
//         return false;
//     }
//     std::cout << year << " " << delimiter1 << " " << month << " " << delimiter2 << " " << day << std::endl;
//     // Check if the extraction was successful and the delimiters are correct
//     if (iss.fail() || delimiter1 != '-' || delimiter2 != '-')
//         return false;

//     // Check if the components fall within valid ranges
//     if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
//         return false;

//     // Check for specific month and day validity
//     if ((month == 2 && day > 29) ||
//         ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
//         return false;

//     return true;