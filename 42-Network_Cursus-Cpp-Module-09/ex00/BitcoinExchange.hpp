/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:43:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/04 17:40:50 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
        float value;
        std::string key;
        std::map<std::string, float> map;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &org_obj);
        BitcoinExchange &operator=(const BitcoinExchange &org_obj);
        ~BitcoinExchange();

        void    fillMap();
        void    ft_error(std::string err);
        
        
        
        class ErrorException : public std::exception
		{
            private:
                const char * err_;
			public:
            ErrorException(const char *err);
			const char* what() const throw();
		};
};

#endif