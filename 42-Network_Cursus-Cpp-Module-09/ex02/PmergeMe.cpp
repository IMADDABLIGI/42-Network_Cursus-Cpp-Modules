/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/17 19:58:00 by idabligi         ###   ########.fr       */
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
    long vl;
    std::stringstream sstr;

    for (int i = 1; i < range; i++)
    {
        sstr << av[i];
        if (!(sstr >> vl) || !(sstr.eof()) || vl < 0 || vl > MAX_INT)
            return (std::cout << "Error Arguments" << std::endl, false);
        sstr.clear();
        this->vc.push_back(vl);
    }
    this->rem = 0;
    return true;
}

void    PmergeMe::makePairs()
{
    if (vc.size() % 2 != 0)
        this->rem = vc.back();
    vc.pop_back();
    for (size_t i = 0; i < vc.size(); i += 2)
        pr.push_back(std::make_pair(vc[i], vc[i+1]));
    std::vector < std::pair<int,int> >::iterator it;
    for (it = pr.begin(); it != pr.end(); it++)
        std::cout << it->first << " " << it->second << "\n";
}