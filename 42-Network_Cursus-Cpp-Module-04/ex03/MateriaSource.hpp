/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:52:12 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/22 18:04:49 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        Character A;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &org_obj);
        MateriaSource &operator=(const MateriaSource &org_obj);
        virtual ~MateriaSource();

        virtual void learnMateria(AMateria* obj);
        virtual AMateria* createMateria(std::string const & type);
};

#endif