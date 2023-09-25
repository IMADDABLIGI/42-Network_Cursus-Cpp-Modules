/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:14:48 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/24 13:03:40 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void leaks()
{system("leaks Interface");}

int main()
{
    atexit (leaks);
    
    {
            IMateriaSource* src = new MateriaSource();
            src->learnMateria(new Ice());
            src->learnMateria(new Cure());
            ICharacter* me = new Character("me");
            AMateria* tmp;
            tmp = src->createMateria("ice");
            me->equip(tmp);
            tmp = src->createMateria("cure");
            me->equip(tmp);
            ICharacter* bob = new Character("bob");
            me->use(0, *bob);
            me->use(1, *bob);
            delete bob;
            delete me;
            delete src;
    }
    {
        ICharacter *ptr = new Character("IMAD");

        ptr->equip(new Ice());
        ptr->equip(new Ice());
        ptr->equip(new Cure());
        ptr->equip(new Cure());
        // ptr->unequip(0);
        ptr->use(0, *ptr);
        // ptr->use(50, *ptr);
        delete (ptr);
    }
}
