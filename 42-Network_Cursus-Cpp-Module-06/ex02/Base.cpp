/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:57:33 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/07 16:22:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(){
    std::cout << "|| Base || Default constructor called" << std::endl;
}

Base::~Base()
{
    std::cout << "|| Base || Destructor called" << std::endl;
}

//---------------------------------------------------------------//

Base *Base::generate()
{
    std::srand(std::time(0));
    int random_num = (std::rand() % 3) + 1;
    Base *ptr;
    switch (random_num)
    {
        case 1:
            ptr = new A;
            std::cout << "Generate() randomly chouse A" << std::endl;
            break ;
        case 2:
            ptr = new B;
            std::cout << "Generate() randomly chouse B" << std::endl;
            break ;
        case 3:
            ptr = new C;
            std::cout << "Generate() randomly chouse C" << std::endl;
            break ;
    }
    return (ptr);
}

void    Base::identify(Base* p)
{
    A *ptr1;
    B *ptr2;
    C *ptr3;

    ptr1 = dynamic_cast <A*>(p);
    if (ptr1)
    {
        std::cout << "The actual type of the object pointed to by p is : A" << std::endl;
        return ;
    }
    ptr2 = dynamic_cast <B*>(p);
    if (ptr2)
    {
        std::cout << "The actual type of the object pointed to by p is : B" << std::endl;
        return ;
    }
    ptr3 = dynamic_cast <C*>(p);
    if (ptr3)
    {
        std::cout << "The actual type of the object pointed to by p is : C" << std::endl;
        return ;
    }
}