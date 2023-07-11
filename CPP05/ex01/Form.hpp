/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:28:34 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/11 20:48:35 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _sign;
        const int           _gradeSign;
        const int           _gradeExec;
    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExec);
        Form(const Form &toCopy);
        ~Form();

        Form &operator=(const Form &toCopy);

        const std::string getName() const;
        bool    getSign() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        void    beSigned(const Bureaucrat &Bureaucrat);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const Form &Bureau);


#endif