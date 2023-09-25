/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:22:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 10:32:12 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        void makeSound() const;
        
        WrongAnimal();
        WrongAnimal(const WrongAnimal &org_obj);
        WrongAnimal &operator=(const WrongAnimal &org_obj);
        ~WrongAnimal();
        std::string getType() const;
};

#endif