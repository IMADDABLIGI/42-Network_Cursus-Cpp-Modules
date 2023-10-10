/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:42 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/07 10:41:44 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
    Data A;
    Data *ptr = &A;
    ptr->a = 5;
    ptr->b = 42;
    ptr->c = "C++ IS BETTER THAN C !!!";
    
    Data *ptr2 = Serializer::deserialize(Serializer::serialize(ptr));
    std::cout << ptr2->a << std::endl;
    std::cout << ptr2->b << std::endl;
    std::cout << ptr2->c << std::endl;
}
