/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:55:50 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 15:11:13 by idabligi         ###   ########.fr       */
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
    {
        rem = org_obj.rem;
        beginTime = org_obj.beginTime;
        //vector
        vc = org_obj.vc;
        seq = org_obj.seq;
        pnd = org_obj.pnd;
        jcb = org_obj.jcb;
        jcbR = org_obj.jcbR;
        pr = org_obj.pr;
        it = org_obj.it;
        //deque
        dq = org_obj.dq;
        sq = org_obj.sq;
        pd = org_obj.pd;
        jcbq = org_obj.jcbq;
        jcbRQ = org_obj.jcbRQ;
        prq = org_obj.prq;
        itq = org_obj.itq;
    }
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
    printTimeVTR();
}

//--------------------------------------Deque------------------------------------------//

void    PmergeMe::executeDQ()
{
    printDQ("before:  ", dq);
    if (dq.size() != 1)
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
    printTimeDQ();
}