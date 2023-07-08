/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:29:32 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:01:55 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequest", 72, 45), _target("Robotomy"){}
RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequest", 72, 45), _target(target){}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy): AForm(toCopy), _target(toCopy.getTarget()){}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy){
    this->_target = toCopy.getTarget();
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm(){}

std::string RobotomyRequestForm::getTarget() const{
    return (this->_target);
}

void    RobotomyRequestForm::execute(const Bureaucrat &execute) const {
    if (this->getSign() == false)
        throw AForm::notSignedException();
    if (this->getGradeExec() < execute.getGrade())
        throw AForm::GradeTooLowException();
    std::srand(0);
    std::srand(std::time(0));
    std::cout << " 🤖 BRRRRRRRRRRR 🤖 " << std::endl;
    if ((rand() % 10) % 2 == 0)
        std::cout << this->getTarget() << " has been robotomizes successfully!" << std::endl;
    else
        std::cout << "Robotomy failed. " << std::endl;
}