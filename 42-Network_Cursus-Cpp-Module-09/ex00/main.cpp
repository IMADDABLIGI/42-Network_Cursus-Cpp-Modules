/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:47:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/05 18:09:40 by idabligi         ###   ########.fr       */
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
        }
    }
    // {
    //     if (ac != 2)
    //         return (std::cout << "Error: could not open file." << std::endl, 1);
    //     BitcoinExchange obj;
    //         obj.getData();
    //     BitcoinExchange obj2(obj);
    //     obj2.execute(av[1]);
    // }
}
