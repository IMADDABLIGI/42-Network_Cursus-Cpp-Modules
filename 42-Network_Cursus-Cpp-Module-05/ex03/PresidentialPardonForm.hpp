/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:08:20 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 19:53:01 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(std::string Name, std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &org_obj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &org_obj);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif