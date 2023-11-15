/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:21:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/14 17:14:22 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// void    leak()
// {
//     system("leaks Easy_Find");
// }

int main()
{
    // atexit(leak);
    // {
    //     std::vector<int> vec;
    //     vec.push_back(10);
    //     vec.push_back(20);
    //     vec.push_back(30);
    //     vec.push_back(40);
    //     if (easyfind(vec, 200))
    //         std::cout << "l9ayt number\n";
    //     else
    //         std::cout << "mal9aytch number\n";
    // }
    {
        std::deque<int> dq;
        dq.push_front(55);
        dq.push_front(550);
        dq.push_back(5500);
        dq.push_back(50005);
        dq.push_back(5500000);
        if (easyfind(dq, 5550))
         std::cout << "l9ayt number\n";
        else
            std::cout << "mal9aytch number\n";
    }
}