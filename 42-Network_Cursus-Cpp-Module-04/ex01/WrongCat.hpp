/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:52:12 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/19 14:06:47 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        void makeSound() const;
        
        WrongCat();
        WrongCat(const WrongCat &org_obj);
        WrongCat &operator=(const WrongCat &org_obj);
        ~WrongCat();
};

#endif