/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:39:23 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 12:51:21 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        void makeSound() const;
        
        Dog();
        Dog(const Dog &org_obj);
        Dog &operator=(const Dog &org_obj);
        ~Dog();
};

#endif