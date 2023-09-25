/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:22:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:47:02 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        virtual void makeSound() const = 0;

        Animal();
        Animal(const Animal &org_obj);
        Animal &operator=(const Animal &org_obj);
        virtual ~Animal();
        std::string getType() const;
};

#endif