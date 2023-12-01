/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:24:51 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/01 18:03:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <iostream>

int main()
{
    //  { 
    //     std::vector<int> vec;
    //     vec.reserve(4);
    //     std::cout << "size : " << vec.size() << std::endl;
    //     std::cout << "capacity : " << vec.capacity() << std::endl;
    //     vec.push_back(50);
    //     vec.push_back(500);
    //     vec.push_back(5000);
    //     vec.push_back(50000);
    //     vec.push_back(500000);
    //     std::cout << "size : " << vec.size() << std::endl;
    //     std::cout << "capacity : " << vec.capacity() << std::endl;
    //     std::cout << vec[0] << std::endl;
    //     std::cout << vec[1] << std::endl;
    //     std::cout << vec.at(2) << std::endl;
	//     std::cout << vec.at(3) << std::endl; 
    //     }
    {
        std::deque<int> dq;
        dq.push_back(5);
        dq.push_back(50);
        dq.push_back(500);
        dq.push_front(-5);
        std::deque<int>::iterator it;
        for(it = dq.begin(); it != dq.end(); it++)
            std::cout << *it << std::endl;
    }
}