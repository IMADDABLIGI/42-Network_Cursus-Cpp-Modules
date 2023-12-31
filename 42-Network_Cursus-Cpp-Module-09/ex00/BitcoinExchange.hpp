/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/17 10:41:03 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
        std::string _date;
        double      _value;
        std::map<std::string, double> map;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &org_obj);
        BitcoinExchange &operator=(const BitcoinExchange &org_obj);
        ~BitcoinExchange();

        void    getData();
        void    execute(std::string arg);
        void    ft_error(std::string err);
        bool    parseLine(std::string line);
        bool    checkDate(std::string date);
        bool    checkValue(std::stringstream &sstr);
        void    exchangeRate();
        
        class ErrorException : public std::exception
		{
            private:
                const char *err_;
			public:
                ErrorException(const char *err);
			    const char* what() const throw();
		};
};

#endif