/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:31:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 12:08:52 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//----------------------------Printing-----------------------------------//

void    PmergeMe::printVTR(std::string str, std::vector<int> &var)
{
    std::cout << str;
    if (var.size() != 1)
        for (it = var.begin(); it != var.end(); it++)
            std::cout << " " << *it;
    else
        std::cout << var.front();
    std::cout << std::endl;
}

//----------------------------Parsing-----------------------------------//

bool PmergeMe::parseVTR(char **av, int range)
{
    long vl;
    std::stringstream sstr;
    
    beginTime = std::clock();
    for (int i = 1; i < range; i++)
    {
        sstr << av[i];
        if (!(sstr >> vl) || !(sstr.eof()) || vl < 0 || vl > MAX_INT)
            return (std::cout << "Error Arguments" << std::endl, false);
        sstr.clear();
        this->vc.push_back(vl);
    }
    this->rem = -1;
    return true;
}

//----------------------------------Pairs--------------------------------//

void    PmergeMe::makePairsVTR()
{
    if (vc.size() % 2 != 0)
    {
        this->rem = vc.back();
        vc.pop_back();
    }
    for (size_t i = 0; i < vc.size(); i += 2)
        pr.push_back(std::make_pair(vc[i], vc[i+1]));
}

void    PmergeMe::sortEachPairsVTR()
{
    int tmp;
    std::vector<std::pair<int,int> >::iterator it;
    
    for (it = pr.begin(); it != pr.end(); it++)
    {
        if (it->first > it->second)
        {
            tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

bool    PmergeMe::checkSortPairsVTR()
{
    std::vector<std::pair<int, int> >::iterator it;
    std::vector<std::pair<int, int> >::iterator itn;
    for (it = pr.begin(); it != pr.end(); it++)
    {
        for (itn = it + 1; itn != pr.end(); itn++)
            if (it->second > itn->second)
                return (false);
    }
    return true;
}

void    PmergeMe::swapPairsVTR(IT &it, IT &itn)
{
    int tmp1, tmp2;
    tmp1 = it->first;
    tmp2 = it->second;
    it->first = itn->first;
    it->second = itn->second;
    itn->first = tmp1;
    itn->second = tmp2;
    it++;
}

void    PmergeMe::sortPairsVTR()
{
    std::vector<std::pair<int,int> >::iterator it;
    std::vector<std::pair<int,int> >::iterator itn;

    while (!checkSortPairsVTR())
    {
        for (it = pr.begin(); it != pr.end(); it++)
        {
            for (itn = it + 1; itn != pr.end(); itn++)
                if (it->second > itn->second)
                    swapPairsVTR(it, itn);
        }
    }
}

void    PmergeMe::splitPairsVTR()
{
    std::vector<std::pair<int, int> >::iterator it;
    for (it = pr.begin(); it != pr.end(); it++)
    {
        seq.push_back(it->second);
        pnd.push_back(it->first);
    }
}

//----------------------------------Jacobsthal----------------------------------//

void    PmergeMe::creatJCBRVTR()
{
    int check = 0;
    int size = pr.size();
    jcbR.push_back(jcb[2]);
    for (it = jcb.begin()+3; !check; it++)
    {
        jcbR.push_back(*it);
        if (*it == size)
            check = 1;
        for (int i = 1; (std::find(jcb.begin(), jcb.end(), *it - i) == jcb.end()); i++)
        {
            jcbR.push_back(*it - i);
            if ((*it - i) == size)
                check = 1;
        }
    }
}

void    PmergeMe::creatJCBVTR()
{
    if (pr.size() != 1)
    {
        jcb.push_back(0);
        jcb.push_back(1);
        for (int i = 1; i < 13; i++)
            jcb.push_back(jcb[i] + 2 * jcb[i - 1]);
        creatJCBRVTR();
    }
}

void    PmergeMe::mergingVTR()
{
    seq.insert(std::lower_bound(seq.begin(), seq.end(), pnd.front()), pnd.front());//Inserting the first value in PND
    for (it = jcbR.begin(); it != jcbR.end(); it++)
    {
        if (*it < (int)(pr.size()))
            seq.insert(std::lower_bound(seq.begin(), seq.end(), pnd[*it]), pnd[*it]);
    }
    if (rem != -1)
        seq.insert(std::lower_bound(seq.begin(), seq.end(), rem), rem);
    this->printVTR("After:   ", seq);
}