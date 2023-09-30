/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:03:36 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/30 11:45:28 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string name;
        const std::string target;
        bool              sign;
        const int         grade_sign;
        const int         grade_exec;

    public:
        AForm();
        AForm(std::string Name, std::string Target,int Grade_sign, int Grade_exec);
        AForm(std::string Name, std::string Target,int Grade_sign, int Grade_exec, bool Sign);
        AForm(const AForm &org_obj);
        AForm &operator=(const AForm &org_obj);
        virtual ~AForm();

        const std::string   &getName() const;
        std::string   getTarget() const;
        bool                getSign() const;
        void                setSign(bool Sign);
        const int           &getGrade_sign() const;
        const int           &getGrade_exec() const;
        void                beSigned(Bureaucrat &obj);
        int					check_grade(int Grade);
        virtual void        execute(Bureaucrat const & executor) const =0;// !!!
        void                ft_error(std::string Error) const;


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
        
		class ErrorExecuteException : public std::exception
		{
			public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &cout, AForm &obj);

#endif