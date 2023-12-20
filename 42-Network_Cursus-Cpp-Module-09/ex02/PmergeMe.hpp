/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:51:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/20 15:06:29 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PMERGEME_HPP
# define PMERGEME_HPP
# define MAX_INT 2147483647

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

class PmergeMe
{
    private:
        //vectors
        std::vector<int> vc;
        std::vector<int> seq;
        std::vector<int> pnd;
        std::vector <std::pair<int,int> > pr;
        int rem; //remaining if we have an odd integers;
        std::vector<int> jcb;
        std::vector<int> jcbR;
        std::vector<int>::iterator it;//Iterator

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
        
        void    swapPairs(std::vector<std::pair<int,int> >::iterator &it, std::vector<std::pair<int,int> >::iterator &itn);
        bool    checkSortPairs();
};

#endif