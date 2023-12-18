/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:50:49 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/18 10:56:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac <= 1)
        return (std::cout << "Error Arguments" << std::endl, 1);
    PmergeMe obj;
    if (!obj.parse(av, ac))
        return (1);
    obj.makePairs();
    obj.sortEachPairs();
    // obj.sortPairs();
}