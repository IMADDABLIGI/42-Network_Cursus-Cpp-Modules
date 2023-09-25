/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:13:35 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/21 11:08:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice &org_obj);
        Ice &operator=(const Ice &org_obj);
        virtual ~Ice();

        virtual AMateria* clone() const;
        void use(ICharacter& target);
};

#endif