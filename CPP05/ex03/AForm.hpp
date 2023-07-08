/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:33:19 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:00:49 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string   _name;
        bool                _sign;
        const int           _gradeSign;
        const int           _gradeExec;
    public:
        AForm();
        AForm(std::string name, int gradeSign, int gradeExec);
        AForm(const AForm &toCopy);
        virtual ~AForm();

        AForm &operator=(const AForm &toCopy);

        const std::string getName() const;
        bool    getSign() const;
        int     getGradeSign() const;
        int     getGradeExec() const;
        void    beSigned(const Bureaucrat &Bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;

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

        class notSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, const AForm &Bureau);


#endif