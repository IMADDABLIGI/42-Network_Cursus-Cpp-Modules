/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:07 by idabligi         ###   ########.fr       */
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

//--------------------------------------Vector------------------------------------------//

void    PmergeMe::executeVTR()
{
    printVTR("before:  ", vc);
    if (vc.size() != 1)
    {
        makePairsVTR();
        sortEachPairsVTR();
        sortPairsVTR();
        splitPairsVTR();
        creatJCBVTR();
        mergingVTR();
    }
    else
        this->printVTR("After:   ", vc);
    endTime = std::clock();
    std::cout << "Time to process a range of  " << seq.size() << " elements with std::vector : ";
    std::cout << (endTime-beginTime) << " us" << std::endl;
}

//--------------------------------------Deque------------------------------------------//

void    PmergeMe::executeDQ()
{
    printDQ("before:  ", dq);
    if (vc.size() != 1)
    {
        makePairsDQ();
        sortEachPairsDQ();
        sortPairsDQ();
        splitPairsDQ();
        creatJCBDQ();
        mergingDQ();
    }
    else
        this->printDQ("After:   ", dq);
    endTime = std::clock();
    std::cout << "Time to process a range of  " << sq.size() << " elements with std::deque  : ";
    std::cout << (endTime-beginTime) << " us" << std::endl;
}