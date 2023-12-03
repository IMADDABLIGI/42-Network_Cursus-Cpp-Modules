/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:24:51 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/03 11:01:08 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <array>
#include <list>
#include <set>
#include <iostream>

// int main()
// {
    // { 
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
    //     std::cout << vec.at(1000) << std::endl;
    //     std::cout << vec[1] << std::endl;
    //     std::cout << vec.at(2) << std::endl;
	//     std::cout << vec.at(3) << std::endl; 
    //     }
    // {
    //     std::deque<int> dq;
    //     dq.push_back(5);
    //     dq.push_back(50);
    //     dq.push_back(500);
    //     dq.push_front(-5);
    //     std::deque<int>::iterator it;
    //     for(it = dq.begin(); it != dq.end(); it++)
    //         std::cout << *it << std::endl;
    // }
    //  {
    //     std::array<int, 5> arr;
    //     arr[0] = 20;
    //     arr[1] = 122;
    //     arr[2] = -2147483648;
    //     std::array<int,5>::iterator it;
    //     for(it = arr.begin(); it != arr.end(); it++)
    //         std::cout << "-->>> " << *it << std::endl;
    //     std::cout << arr[0] << std::endl;
    //     std::cout << arr[1] << std::endl;
    //     std::cout << arr[2] << std::endl;
    //     std::cout << arr.size() << std::endl;
    //     std::cout << arr.data() << std::endl;
    //     std::cout << "Begin :: " << arr.begin() << std::endl;
    //     std::cout << arr.end() << std::endl;
    // }
    // {
    //       std::list<int> lt;
    //       lt.push_back(20);
    //       lt.push_back(3);
    //       lt.push_back(-4);
    //       lt.push_back(334);
    //       lt.push_back(-444);
    //       lt.sort();
    //       std::list<int>::iterator it = lt.begin();
    //       std::advance(it, 1);
    //       lt.erase(it);
    //       for (it = lt.begin(); it != lt.end(); it++)
    //         std::cout << *it << std::endl;
    // }
    // {
    //     std::set<int> set; 
    //     // Inserting elements into the set
    //     set.insert(2);
    //     set.insert(5);
    //     set.insert(3);
    //     set.insert(3);

    //     std::set<int>::iterator it;
    //     for (it = set.begin(); it != set.end(); it++)
    //         std::cout << *it << " ";
    //     std::cout << std::endl;
    //     }
    // {
    //     std::map<std::string, int> map;

    //     map["age"] = 750;
    //     map["aae"] = 2165;
    //     map.insert(std::make_pair("zEDGE", 800));
    //     std::map<std::string, int>::iterator it;
    //     for(it = map.begin(); it != map.end(); it++)
    //         std::cout << it->first << " " << it->second << std::endl;
    // }
// }
