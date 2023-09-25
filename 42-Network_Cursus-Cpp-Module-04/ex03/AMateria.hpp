/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:42:20 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:55:24 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &org_obj);
        AMateria &operator=(const AMateria &org_obj);
        virtual ~AMateria();

        std::string const &getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif