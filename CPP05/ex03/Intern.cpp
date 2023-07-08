/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:22:15 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:04:40 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}
Intern::Intern(const Intern &toCopy)
{
    *this = toCopy;
}

Intern &Intern::operator=(const Intern &toCopy)
{
    (void) toCopy;
    return (*this);
}

static AForm *formPresidential(const std::string &target){
    return (new PresidentialPardonForm(target));
}


static AForm *formRobotomy(const std::string &target){
    return (new RobotomyRequestForm(target));
}

static AForm *formShrubbery(const std::string &target){
    return (new ShrubberyCreationForm(target));
}

const char *Intern::InvalidForm::what() const throw() {
    return ("Invalid Form.");
}

AForm *Intern::makeForm(const std::string &nameForm, const std::string &targetForm)
{
    AForm *(*forms[3]) (const std::string &target) = {
        &formPresidential,
        &formRobotomy,
        &formShrubbery
    };

    std::string names[] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (nameForm == names[i])
        {
            std::cout << "Intern creates " << names[i] << std::endl;
            return (forms[i](targetForm));
        }
    }
    throw Intern::InvalidForm();
}