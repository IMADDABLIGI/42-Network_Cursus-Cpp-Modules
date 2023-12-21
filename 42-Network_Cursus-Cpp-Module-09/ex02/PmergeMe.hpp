/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:51:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 15:00:47 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PMERGEME_HPP
# define PMERGEME_HPP
# define MAX_INT 2147483647
# define IT std::vector<std::pair<int,int> >::iterator
# define ITQ std::deque<std::pair<int,int> >::iterator

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <string>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
    private:
        int rem; //remaining if we have an odd integers;
        std::clock_t beginTime, endTime;
        
        //vectors
        std::vector<int> vc, seq, pnd, jcb, jcbR;
        std::vector <std::pair<int,int> > pr;
        std::vector<int>::iterator it;//Iterator
        
        //Deque
        std::deque<int> dq, sq, pd, jcbq, jcbRQ;
        std::deque <std::pair<int,int> > prq;
        std::deque<int>::iterator itq;//Iterator

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &org_obj);
        PmergeMe &operator=(const PmergeMe &org_obj);
        ~PmergeMe();

        bool    parseVTR(char **av, int range);
        void    executeVTR();
        void    makePairsVTR();
        void    sortEachPairsVTR();
        void    sortPairsVTR();
        void    splitPairsVTR();
        void    creatJCBVTR();
        void    creatJCBRVTR();
        void    mergingVTR();
        void    printVTR(std::string str, std::vector<int> &var);
        void    printTimeVTR();

        void    swapPairsVTR(IT &it, IT &itn);
        bool    checkSortPairsVTR();

        //Deque
        bool    parseDQ(char **av, int range);
        void    executeDQ();
        void    makePairsDQ();
        void    sortEachPairsDQ();
        void    sortPairsDQ();
        void    splitPairsDQ();
        void    creatJCBDQ();
        void    creatJCBRDQ();
        void    mergingDQ();
        void    printDQ(std::string str, std::deque<int> &var);
        void    printTimeDQ();

        void    swapPairsDQ(ITQ &it, ITQ &itn);
        bool    checkSortPairsDQ();
};

#endif
