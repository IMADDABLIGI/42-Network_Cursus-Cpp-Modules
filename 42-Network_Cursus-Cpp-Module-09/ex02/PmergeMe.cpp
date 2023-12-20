/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/20 15:07:44 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//----------------------------Canonical_Form-----------------------------------//

PmergeMe::PmergeMe()
{}

PmergeMe::PmergeMe(const PmergeMe &org_obj)
{
    *this = org_obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &org_obj)
{
    if (this != &org_obj)
    {}
	return (*this);
}

PmergeMe::~PmergeMe()
{}


//----------------------------------------------------------------------------------------//

void    PmergeMe::executeVTR()
{
    std::cout << "Before:  ";
    for (it = vc.begin(); it != vc.end(); it++)
        std::cout << " " << *it;
    std::cout << std::endl;
    if (vc.size() != 1)
    {
        makePairs();
        sortEachPairs();
        sortPairs();
        splitPairs();
        creatJCB();
        merging();
    }
    else
    {
        std::cout << "After:    ";
        std::cout << vc.front() << std::endl;
    }
}