/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:22:49 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 13:23:39 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string Target);
        RobotomyRequestForm(const RobotomyRequestForm &org_obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &org_obj);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};

#endif