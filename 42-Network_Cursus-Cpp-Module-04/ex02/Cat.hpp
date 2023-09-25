/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:52:12 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/20 11:12:24 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Cat : public Animal
{
    private:
        Brain *ptr;

    public:
        void makeSound() const;
        
        Cat();
        Cat(const Cat &org_obj);
        Cat &operator=(const Cat &org_obj);
        virtual ~Cat();
};

#endif