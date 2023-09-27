/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:33:00 by idabligi          #+#    #+#             */
/*   Updated: 2023/09/27 09:20:33 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <exception>
#include <iostream>

class GradeTooHighException : public std::exception
{
    public:
    const char* what() const throw() {
        return "Grade is too High\n";
    }
};

// class GradeTooLowException : public std::exception
// {
//     public:
//     const char* what() const noexcept override {
//         return "Grade is too low\n";
//     }
// };

class Bureaucrat
{
    private:
        const std::string name;
        int               grade;
        GradeTooHighException high;
        // GradeTooLowException low;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(const Bureaucrat &org_obj);
        Bureaucrat &operator=(const Bureaucrat &org_obj);
        ~Bureaucrat();

        int                 getGrade();
        const std::string   getName();
        int check_grade(int Grade);
};

#endif