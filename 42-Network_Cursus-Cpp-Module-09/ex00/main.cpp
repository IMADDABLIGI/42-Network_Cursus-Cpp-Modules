/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:47:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 15:28:00 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    {
        if (ac != 2)
            return (std::cout << "Error: could not open file." << std::endl, 1);
        try
        {
            BitcoinExchange obj;
            obj.getData();
            obj.execute(av[1]);
        }
        catch (const std::exception &e){
            std::cout << e.what();
            return (1);
        }
    }
}
