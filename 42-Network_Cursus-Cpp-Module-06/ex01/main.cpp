/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:50:42 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/06 18:01:37 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"


// int main(){
//     Data A;
//     A.a = 5;
//     A.b = 80;
//     A.c = 'H';
//     int * ptr = reinterpret_cast <int*> (&A);
//     std::cout << *ptr << std::endl;
// }

int main()
{
    Data a;
    Data *ptr = &a;
    ptr->a = 5;
    ptr->b = 566;

    Data *ptr2;
    ptr2 = Serializer::deserialize(Serializer::serialize(ptr));
    std::cout << ptr2->a << std::endl;
    std::cout << ptr2->b << std::endl;
}