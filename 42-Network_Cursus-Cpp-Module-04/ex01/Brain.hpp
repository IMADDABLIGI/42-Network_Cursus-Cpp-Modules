/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:07:08 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/23 15:41:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
    std::string ideas[100];

    public:
    void       print();
    void    set_ideas(); 

    Brain();
    Brain(const Brain &org_obj);
    Brain &operator=(const Brain &org_obj);
    virtual ~Brain();
};

#endif