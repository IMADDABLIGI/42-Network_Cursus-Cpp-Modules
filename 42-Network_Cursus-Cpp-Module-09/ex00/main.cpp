/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:47:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/04 17:00:38 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
    try
    {
        BitcoinExchange obj;
        obj.fillMap();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what();
    }
}
