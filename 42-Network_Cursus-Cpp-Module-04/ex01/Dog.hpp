/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:39:23 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 14:00:17 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *ptr;

    public:
        void makeSound() const;
        Dog();
        Dog(const Dog &org_obj);
        Dog &operator=(const Dog &org_obj);
        virtual ~Dog();
};

#endif