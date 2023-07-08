/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:47:37 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:12:05 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Presidential"){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy) : AForm(toCopy), _target(toCopy.getTarget()){}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy){
    this->_target = toCopy.getTarget();
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(){}

std::string PresidentialPardonForm::getTarget() const{
    return (this->_target);
}

void    PresidentialPardonForm::execute(const Bureaucrat &execute) const {
    if (this->getSign() == false)
        throw AForm::notSignedException();
    if (this->getGradeExec() < execute.getGrade())
        throw AForm::GradeTooLowException();
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}