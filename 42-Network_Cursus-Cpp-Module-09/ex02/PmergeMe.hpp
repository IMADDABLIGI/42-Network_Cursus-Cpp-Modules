/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 17:51:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/18 10:55:34 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PMERGEME_HPP
# define PMERGEME_HPP
# define MAX_INT 2147483647

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

class PmergeMe
{
    private:
        std::vector<int> vc;
        std::vector <std::pair<int,int> > pr;
        int rem; //remaining if we have an odd integers;

    public:
        PmergeMe();
        PmergeMe(const PmergeMe &org_obj);
        PmergeMe &operator=(const PmergeMe &org_obj);
        ~PmergeMe();


        void    makePairs();
        void    sortPairs();
        void    sortEachPairs();
        bool    checkSortPairs();
        bool    parse(char **av, int range);
};

#endif