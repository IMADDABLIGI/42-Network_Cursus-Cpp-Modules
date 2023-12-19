/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:31:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/19 16:40:52 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

//----------------------------Parsing-----------------------------------//

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
    this->rem = -1;
    return true;
}

//----------------------------------Pairs--------------------------------//

void    PmergeMe::makePairs()
{
    if (vc.size() % 2 != 0)
        this->rem = vc.back();
    vc.pop_back();
    for (size_t i = 0; i < vc.size(); i += 2)
        pr.push_back(std::make_pair(vc[i], vc[i+1]));
}

void    PmergeMe::sortEachPairs()
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

bool    PmergeMe::checkSortPairs()
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

void    PmergeMe::swapPairs(std::vector<std::pair<int,int> >::iterator &it, std::vector<std::pair<int,int> >::iterator &itn)
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

void    PmergeMe::sortPairs()
{
    std::vector<std::pair<int,int> >::iterator it;
    std::vector<std::pair<int,int> >::iterator itn;

    while (!checkSortPairs())
    {
        for (it = pr.begin(); it != pr.end(); it++)
        {
            for (itn = it + 1; itn != pr.end(); itn++)
                if (it->second > itn->second)
                    swapPairs(it, itn);
        }
    }
}

void    PmergeMe::splitPairs()
{
    std::vector<std::pair<int, int> >::iterator it;
    for (it = pr.begin(); it != pr.end(); it++)
    {
        seq.push_back(it->second);
        std::cout << it->first << " " << it->second << std::endl;
    }
    if (rem != -1)
        std::cout << rem << std::endl;
    std::cout << "--------------------------\n";
}

//----------------------------------Jacobsthal----------------------------------//

void    PmergeMe::creatJCBR()
{
    jcbR.push_back(jcb[2]);
    std::vector<int>::iterator it;
    for (it = jcb.begin()+3; it != jcb.end(); it++)
    {
        jcbR.push_back(*it);
        for (int i = 1; (std::find(jcb.begin(), jcb.end(), *it - i) == jcb.end()); i++)
            jcbR.push_back(*it - i);
    }
    std::cout << "JACOBR : ";
    for (it = jcbR.begin(); it != jcbR.end(); it++)
        std::cout << *it << " ";
}

void    PmergeMe::creatJCB()
{
    std::vector<int>::iterator it;
    int check = pr.size();
    std::cout << "Size of Pairs is : " << check << std::endl;
    jcb.push_back(0);
    jcb.push_back(1);
    for (int i = 1; (jcb[i] + 2 * jcb[i - 1]) <= check; i++)
        jcb.push_back(jcb[i] + 2 * jcb[i - 1]);
    
    std::cout << "JACOB  : ";
    for (it = jcb.begin(); it != jcb.end(); it++)
        std::cout << *it << " ";
        std::cout << std::endl;
    creatJCBR();
}

