/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:51:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/09 12:31:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

bool isInteger(const std::string& str) {
    std::stringstream ss(str);
    int num;
    return (ss >> num) && ss.eof();
}

bool isFloat(const std::string& str) {
    std::stringstream ss(str);
    float num;
    return (ss >> num) && ss.eof();
}

int main() {
    std::string str1 = "123";
    std::string str2 = "3.14";
    std::string str3 = "Hello";

    if (isInteger(str2)) {
        std::cout << str2 << " is an integer." << std::endl;
    } else {
        std::cout << str2 << " is not an integer." << std::endl;
    }

    if (isFloat(str2)) {
        std::cout << str2 << " is a float." << std::endl;
    } else {
        std::cout << str2 << " is not a float." << std::endl;
    }

    if (isInteger(str3)) {
        std::cout << str3 << " is an integer." << std::endl;
    } else {
        std::cout << str3 << " is not an integer." << std::endl;
    }

    return 0;
}