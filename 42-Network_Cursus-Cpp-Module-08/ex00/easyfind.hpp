/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:07:19 by idabligi          #+#    #+#             */
/*   Updated: 2023/11/14 14:39:30 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T>
bool easyfind(T ctr, int find)
{
    if (std::find(ctr.begin(), ctr.end(), find) != ctr.end())
            return (true);
    return (false);
}
