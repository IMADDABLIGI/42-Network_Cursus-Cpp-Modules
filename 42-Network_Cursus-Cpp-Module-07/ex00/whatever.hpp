/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:54:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/12 11:18:53 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename A>
void swap(A &arg1, A &arg2)
{
    A tmp;
    tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template <typename B>
B min(B &arg1, B &arg2)
{
    if (arg1 < arg2)
        return (arg1);
    return (arg2);
}

template <typename C>
C max(C &arg1, C &arg2)
{
    if (arg1 > arg2)
        return (arg1);
    return (arg2);
}

#endif