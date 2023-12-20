/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/20 20:06:47 by idabligi         ###   ########.fr       */
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
    gettimeofday(&endTime, NULL);
    std::cout << "Time to process a range of  " << seq.size() << " elements with std::vector : ";
    std::cout << (endTime.tv_usec - beginTime.tv_usec) << " us" << std::endl;
}