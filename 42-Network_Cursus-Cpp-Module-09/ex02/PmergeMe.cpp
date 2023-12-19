/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/19 12:01:09 by idabligi         ###   ########.fr       */
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
    makePairs();
    sortEachPairs();
    sortPairs();
    splitPairs();
    creatJCB();
}