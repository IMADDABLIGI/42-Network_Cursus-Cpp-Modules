/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:04:22 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/09 16:20:33 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    { // Testing generate() And identify(p);
        Base *p;
        Base A;
        p = A.generate();
        A.identify(p);
        delete p;
    }
    { // Testing identify(&p);
        B obj;
        Base &p = obj;
        p.identify(p);
    }
}