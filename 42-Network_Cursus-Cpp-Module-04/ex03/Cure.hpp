/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:08:28 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:55:26 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &org_obj);
        Cure &operator=(const Cure &org_obj);
        virtual ~Cure();

        virtual AMateria* clone() const;
        void   use(ICharacter& target);
};

#endif