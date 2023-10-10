/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:57:33 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/07 17:22:27 by idabligi         ###   ########.fr       */
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

void Base::print(char C)
{
    std::cout << "The actual type of the object pointed to by p is : " << C << std::endl;
}

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

    
    if ((ptr1 = dynamic_cast <A*>(p)))
        ptr1->print('A');
    else if ((ptr2 = dynamic_cast <B*>(p)))
        ptr2->print('B');
    else if ((ptr3 = dynamic_cast <C*>(p)))
        ptr3->print('C');
}

void Base::identify(Base& p)
{
    try {
        A &r1 = dynamic_cast <A&>(p);
        r1.print('A');
    }
    catch(const std::exception& e)
    {
        try {
            B &r2 = dynamic_cast <B&>(p);
            r2.print('B');
        }
        catch(const std::exception& e)
        {
            C &r3 = dynamic_cast <C&>(p);
            r3.print('C');
        }
    }
}