/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:22:24 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:44:22 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
    public:
        Intern();
        Intern(const Intern &toCopy);
        Intern &operator=(const Intern &toCopy);
        ~Intern();
        AForm *makeForm(const std::string &nameForm, const std::string &targetForm);

        class InvalidForm : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif