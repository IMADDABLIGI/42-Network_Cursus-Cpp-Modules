/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:21:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/13 16:34:49 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>

template <typename T>
bool easyfind(T arg, int find)
{
    typename T::iterator it;
    for (it = arg.begin(); it != arg.end(); it++)
        if (*it == find)
            return (true);
    return (false);
}

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    if (easyfind(vec, 200))
        std::cout << "l9ayt number\n";
    else
        std::cout << "mal9aytch number\n";
}