/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:54:31 by idabligi          #+#    #+#             */
/*   Updated: 2023/12/21 15:42:15 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <stack>

class RPN
{
    private:
        std::stack<float> st;

    public:
        RPN();
        RPN(const RPN &org_obj);
        RPN &operator=(const RPN &org_obj);
        ~RPN();

        bool    parse(std::string str);
        bool    execute(std::string str);
        void    calculate(std::string c);
};

#endif