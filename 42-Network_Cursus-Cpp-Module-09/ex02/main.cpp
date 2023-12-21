/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:50:49 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 11:49:57 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac <= 1)
        return (std::cout << "Error Arguments" << std::endl, 1);
    PmergeMe obj;
    {
        if (!obj.parseVTR(av, ac))
            return (1);
        obj.executeVTR();
    }
    {
        if (!obj.parseDQ(av, ac))
            return (1);
        obj.executeDQ();
    }
}