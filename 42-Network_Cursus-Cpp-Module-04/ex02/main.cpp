/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:31:33 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 12:55:41 by idabligi         ###   ########.fr       */
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
        Animal *A;

        A = new Cat();
        A->makeSound();
        delete A;
    }
    // {
    //     // Wrong Test;
    //     Animal A;
        
    //     A.makeSound();
    // }
    return 0;
}
