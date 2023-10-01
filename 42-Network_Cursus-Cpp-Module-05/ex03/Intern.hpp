/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:14:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 17:45:01 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        // Intern(const Intern &org_obj);
        // Intern &operator=(const Intern &org_obj);
        ~Intern();

        AForm   *makeForm(std::string name, std::string target);
        AForm   *ShrubberyCreation(std::string name, std::string target);
};

#endif