/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:27:35 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/06 16:38:28 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//----------------------------Constructor-----------------------------//

Serializer::Serializer(){
    std::cout << "|| Serializer || Default constructor called" << std::endl;
}

//-----------------------Copy Constructor-----------------------------//

Serializer::Serializer(const Serializer &org_obj){
	std::cout << "|| Serializer || Copy constructor called" << std::endl;
    (void) org_obj;
}

//-----------------------Copy assignmenet Operator--------------------//

Serializer &Serializer::operator=(const Serializer &org_obj)
{
    std::cout << "|| Serializer || Copy assignment operator called" << std::endl;
    (void) org_obj;
	return (*this);
}

//----------------------------Destructors-----------------------------//

Serializer::~Serializer()
{
	std::cout << "|| Serializer || Destructor called" << std::endl;
}

//----------------------------Implementations-------------------------//


uintptr_t Serializer::serialize(Data* ptr)
{
    std::cout << "Converting Data to uintptr_t" << std::endl;
    uintptr_t addr = reinterpret_cast <uintptr_t> (ptr);
    return (addr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    std::cout << "Converting uintptr_t to Data" << std::endl;
    Data *ptr = reinterpret_cast <Data*> (raw);
    return (ptr);
}