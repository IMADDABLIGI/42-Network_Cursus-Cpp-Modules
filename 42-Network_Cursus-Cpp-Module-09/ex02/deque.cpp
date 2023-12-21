/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:11:58 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 12:09:08 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//----------------------------Printing-----------------------------------//

void    PmergeMe::printDQ(std::string str, std::deque<int> &var)
{
    std::cout << str;
    if (var.size() != 1)
        for (itq = var.begin(); itq != var.end(); itq++)
            std::cout << " " << *itq;
    else
        std::cout << var.front();
    std::cout << std::endl;
}

//----------------------------Parsing-----------------------------------//

bool PmergeMe::parseDQ(char **av, int range)
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
        this->dq.push_back(vl);
    }
    this->rem = -1;
    return true;
}

//----------------------------------Pairs--------------------------------//

void    PmergeMe::makePairsDQ()
{
    if (dq.size() % 2 != 0)
    {
        this->rem = dq.back();
        dq.pop_back();
    }
    for (size_t i = 0; i < dq.size(); i += 2)
        prq.push_back(std::make_pair(dq[i], dq[i+1]));
}

void    PmergeMe::sortEachPairsDQ()
{
    int tmp;
    std::deque<std::pair<int,int> >::iterator it;
    
    for (it = prq.begin(); it != prq.end(); it++)
    {
        if (it->first > it->second)
        {
            tmp = it->first;
            it->first = it->second;
            it->second = tmp;
        }
    }
}

bool    PmergeMe::checkSortPairsDQ()
{
    std::deque<std::pair<int, int> >::iterator it;
    std::deque<std::pair<int, int> >::iterator itn;
    for (it = prq.begin(); it != prq.end(); it++)
    {
        for (itn = it + 1; itn != prq.end(); itn++)
            if (it->second > itn->second)
                return (false);
    }
    return true;
}

void    PmergeMe::swapPairsDQ(ITQ &it, ITQ &itn)
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

void    PmergeMe::sortPairsDQ()
{
    std::deque<std::pair<int,int> >::iterator it;
    std::deque<std::pair<int,int> >::iterator itn;

    while (!checkSortPairsDQ())
    {
        for (it = prq.begin(); it != prq.end(); it++)
        {
            for (itn = it + 1; itn != prq.end(); itn++)
                if (it->second > itn->second)
                    swapPairsDQ(it, itn);
        }
    }
}

void    PmergeMe::splitPairsDQ()
{
    std::deque<std::pair<int, int> >::iterator it;
    for (it = prq.begin(); it != prq.end(); it++)
    {
        sq.push_back(it->second);
        pd.push_back(it->first);
    }
}

//----------------------------------Jacobsthal----------------------------------//

void    PmergeMe::creatJCBRDQ()
{
    int check = 0;
    int size = prq.size();
    jcbRQ.push_back(jcbq[2]);
    for (itq = jcbq.begin()+3; !check; itq++)
    {
        jcbRQ.push_back(*itq);
        if (*itq == size)
            check = 1;
        for (int i = 1; (std::find(jcbq.begin(), jcbq.end(), *itq - i) == jcbq.end()); i++)
        {
            jcbRQ.push_back(*itq - i);
            if ((*itq - i) == size)
                check = 1;
        }
    }
}

void    PmergeMe::creatJCBDQ()
{
    if (prq.size() != 1)
    {
        jcbq.push_back(0);
        jcbq.push_back(1);
        for (int i = 1; i < 13; i++)
            jcbq.push_back(jcbq[i] + 2 * jcbq[i - 1]);
        creatJCBRDQ();
    }
}

void    PmergeMe::mergingDQ()
{
    sq.insert(std::lower_bound(sq.begin(), sq.end(), pd.front()), pd.front());//Inserting the first value in PND
    for (itq = jcbRQ.begin(); itq != jcbRQ.end(); itq++)
    {
        if (*itq < (int)(prq.size()))
            sq.insert(std::lower_bound(sq.begin(), sq.end(), pd[*itq]), pd[*itq]);
    }
    if (rem != -1)
        sq.insert(std::lower_bound(sq.begin(), sq.end(), rem), rem);
    this->printDQ("After:   ", sq);
}