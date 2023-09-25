/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:31:33 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 10:47:39 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
    // {
    //     int i;
    //     Animal *Arr[6];

    //     std::cout << "--------- CREATING CATS ---------" << std::endl;
    //     for (i = 0; i < 3; i++)
    //         Arr[i] = new Cat();
    //     std::cout << "--------- CREATING DOGS ---------" << std::endl;
    //     for (i = 3; i < 6; i++)
    //         Arr[i] = new Dog();
	// 	//---------------------------------------------------------------//
    //     std::cout << "--------- DESTROYING DOGS ---------" << std::endl;
    //     for (i = 5; i > 2; i--)
    //         delete Arr[i];
    //     std::cout << "--------- DESTROYING Cats ---------" << std::endl;
    //     for (i = 2; i >= 0; i--)
    //         delete Arr[i];
    // }
	// {
	// 	Brain A;
	// 	Brain B;
		
	// 	A.set_ideas();
	// 	B = A;
	// 	B.print();
	// }
    return 0;
}
