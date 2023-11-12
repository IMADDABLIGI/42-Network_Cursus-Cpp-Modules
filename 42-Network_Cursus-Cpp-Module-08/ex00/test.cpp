/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:44:01 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/12 18:17:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <vector>

int main()
{
    // {
        // std::array<int, 5> arr;
    // arr[0] = 20;
    // arr[1] = 122;
    // std::cout << arr[0] << std::endl;
    // std::cout << arr[1] << std::endl;
    // std::cout << arr.size() << std::endl;
    // std::cout << arr.data() << std::endl;
    // std::cout << arr.begin() << std::endl;
    // std::cout << arr.end() << std::endl;
    // }
    {
        std::vector<int> vec;
        std::cout << vec.size() << std::endl;
        std::cout << vec.capacity() << std::endl;
        vec.push_back(50);
        vec.push_back(500);
        vec.push_back(5000);
        vec.push_back(5000);
        vec.push_back(5000);
        std::cout << vec.size() << std::endl;
        std::cout << vec.capacity() << std::endl;
        std::cout << vec.at(0) << std::endl;
        std::cout << vec[1] << std::endl;
    }
}
