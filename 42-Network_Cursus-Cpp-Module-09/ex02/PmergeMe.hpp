/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:51:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/20 15:58:12 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PMERGEME_HPP
# define PMERGEME_HPP
# define MAX_INT 2147483647
# define IT std::vector<std::pair<int,int> >::iterator

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <sys/time.h>

class PmergeMe
{
    private:
        //vectors
        std::vector<int> vc, seq, pnd, jcb, jcbR;
        std::vector <std::pair<int,int> > pr;
        std::vector<int>::iterator it;//Iterator
        int rem; //remaining if we have an odd integers;
        timeval beginTime, endTime;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &org_obj);
        PmergeMe &operator=(const PmergeMe &org_obj);
        ~PmergeMe();

        bool    parse(char **av, int range);
        void    executeVTR();
        void    makePairs();
        void    sortEachPairs();
        void    sortPairs();
        void    splitPairs();
        void    creatJCB();
        void    creatJCBR();
        void    merging();
        void    print(std::string str, std::vector<int> &var);

        void    swapPairs(IT &it, IT &itn);
        bool    checkSortPairs();
};

#endif
