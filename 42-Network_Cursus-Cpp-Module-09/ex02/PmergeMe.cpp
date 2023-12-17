/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/17 19:23:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//----------------------------Constructors----------------------------//

PmergeMe::PmergeMe()
{}

//-----------------------Copy Constructor-----------------------------//

PmergeMe::PmergeMe(const PmergeMe &org_obj)
{
    *this = org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

PmergeMe &PmergeMe::operator=(const PmergeMe &org_obj)
{
    if (this != &org_obj)
    {}
	return (*this);
}

//----------------------------Destructors-----------------------------//

PmergeMe::~PmergeMe()
{}

//--------------------------------------------------------------------//
//----------------------------Implementations-------------------------//
//--------------------------------------------------------------------//

bool PmergeMe::parse(char **av, int range)
{
    std::stringstream sstr;
    long vl;

    for (int i = 1; i < range; i++)
    {
        sstr << av[i];
        if (!(sstr >> vl))
            return (std::cout << "Error Arguments" << std::endl, false);
        if (!(sstr.eof()))
            return (std::cout << "Error Arguments" << std::endl, false);
        if (vl < 0 || vl > MAX_INT)
            return (std::cout << "Error Arguments" << std::endl, false);
        sstr.clear();
        std::cout << vl << std::endl; 
    }
    return true;
}