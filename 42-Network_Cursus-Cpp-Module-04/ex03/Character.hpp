/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:31:57 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 13:00:11 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
        std::string name;//Character's name
        AMateria *ivtry[4];//Inventory
    public:
        Character();
        Character(std::string Name);
        Character(const Character &org_obj);
        Character &operator=(const Character &org_obj);
        virtual ~Character();

        AMateria* ret_Materia(std::string const & type);
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif