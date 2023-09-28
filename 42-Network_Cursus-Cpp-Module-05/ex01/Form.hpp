/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:03:36 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/28 15:56:42 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>
#include <iostream>

class Form
{
    private:
        const std::string name;
        bool              sign;
        const int         grade_sign;
        const int         grade_exec;

    public:
        Form();
        Form(std::string Name, int Grade_sign, int Grade_exec);
        Form(const Form &org_obj);
        Form &operator=(const Form &org_obj);
        ~Form();

        const std::string   &getName();
        bool                getSign();
        const int           &getGrade_sign();
        const int           &getGrade_exec();
        int					check_grade(int Grade);


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

std::ostream &operator<<(std::ostream &cout, Form &obj);

#endif