/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:44:01 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/13 15:55:55 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <vector>
#include <set>

int main()
{
    // {
    //     std::array<int, 5> arr;
    // arr[0] = 20;
    // arr[1] = 122;
    // std::cout << arr[0] << std::endl;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr.size() << std::endl;
    // std::cout << arr.data() << std::endl;
    // std::cout << "Begin :: " << arr.begin() << std::endl;
    // std::cout << arr.end() << std::endl;
    // }
    {
        std::vector<int> vec;
        vec.resize(5);
        std::cout << "size : " << vec.size() << std::endl;
        std::cout << "capacity : " << vec.capacity() << std::endl;
        vec.push_back(50);
        vec.push_back(500);
        vec.push_back(5000);
        vec.push_back(50000);
        vec.push_back(500000);
        std::cout << "size : " << vec.size() << std::endl;
        std::cout << "capacity : " << vec.capacity() << std::endl;
        std::cout << vec[5] << std::endl;
        std::cout << vec[6] << std::endl;
        std::cout << vec[7] << std::endl;
        vec.resize(2);
        std::cout << "size : " << vec.size() << std::endl;
        std::cout << vec[5] << std::endl;
        std::cout << vec[6] << std::endl;
        std::cout << vec[7] << std::endl;
    }
    {
        std::set<int> set; 
        // Inserting elements into the set
        set.insert(2);
        set.insert(5);
        set.insert(3);

        std::set<int>::iterator it;
        for (it = set.begin(); it != set.end(); it++)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
        }
}
