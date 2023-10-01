/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:22:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 17:47:39 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Target);
        ShrubberyCreationForm(std::string Name, std::string Target);
        ShrubberyCreationForm(const ShrubberyCreationForm &org_obj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &org_obj);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};

#endif