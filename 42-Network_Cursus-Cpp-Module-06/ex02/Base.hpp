/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:55:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/07 17:01:17 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
    Base();
    virtual ~Base();
    Base *generate();
    void identify(Base* p);
    void identify(Base& p);
    void print(char C);
};

#endif