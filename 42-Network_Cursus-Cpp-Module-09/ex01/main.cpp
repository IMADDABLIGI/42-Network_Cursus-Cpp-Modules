/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:54:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/06 14:21:11 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN obj;
    if (ac != 2)
        return (std::cout << "Error" << std::endl, 1);
    if (!obj.parse(av[1]))
        return (1);
    if (!obj.execute(av[1]))
        return (1);
}