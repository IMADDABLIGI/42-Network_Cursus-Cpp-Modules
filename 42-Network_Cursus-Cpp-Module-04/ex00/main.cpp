/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:31:33 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 10:33:33 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "-----------------------------------------------" << std::endl;
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete j;
        delete i;
        delete meta;
    }
    std::cout << "-----------------------------------------------" << std::endl;
    // {
    //     const WrongAnimal* i = new WrongCat();
    //     i->makeSound(); //will output the WrongAnimal sound!
    //     delete i;
    // }
    std::cout << "-----------------------------------------------" << std::endl;
    // {
    //     Cat A;
    //     Cat B(A);
        
    //     B.makeSound();
    // }
    std::cout << "-----------------------------------------------" << std::endl;
    return 0;
}