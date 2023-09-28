/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:54 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/28 18:36:27 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    {
        try
        {
            Bureaucrat B("Soldier", 20);
            Form A("CDD", 5, 10);
            std::cout << A;
            if (!A.getSign())
            std::cout << "The Form is not signed" << std::endl;
            else if (A.getSign())
            std::cout << "The Form is signed" << std::endl;
            A.beSigned(B);
            if (!A.getSign())
            std::cout << "The Form is not signed" << std::endl;
            else if (A.getSign())
            std::cout << "The Form is signed" << std::endl;
            std::cout << A;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
        }
    }
}
