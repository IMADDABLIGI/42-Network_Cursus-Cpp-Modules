/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/27 09:59:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat A("IMAD", 0);
    }
    // catch (const GradeTooHighException &high)
    // {
    //     std::cout << high.what();
    // }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
    
}