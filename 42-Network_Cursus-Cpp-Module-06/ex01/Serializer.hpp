/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:58:36 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/10 10:35:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include "Data.hpp"

class Serializer
{
    private:
        Serializer();
    public:
        Serializer(const Serializer &org_obj);
        Serializer &operator=(const Serializer &org_obj);
        ~Serializer();

        static uintptr_t   serialize(Data* ptr);
        static Data*       deserialize(uintptr_t raw);
};
#endif