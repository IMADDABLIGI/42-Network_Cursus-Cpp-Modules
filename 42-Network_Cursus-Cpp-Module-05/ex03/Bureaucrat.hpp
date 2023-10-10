/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:33:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/10/01 14:57:18 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <iostream>

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int               grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(const Bureaucrat &org_obj);
        Bureaucrat &operator=(const Bureaucrat &org_obj);
        ~Bureaucrat();

        int                 getGrade() const;
        const std::string   &getName();
        void                executeForm(AForm const & form);
        int					check_grade(int &Grade);


		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat &obj);

#endif