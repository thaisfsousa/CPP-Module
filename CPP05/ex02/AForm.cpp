/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:36:51 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:18:20 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("DefaultName"), _sign(false), _gradeSign(150), _gradeExec(150)
{
    std::cout << "AForm Constructor Called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
    else if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &toCopy) : _name(toCopy._name), _sign(toCopy.getSign()), _gradeSign(toCopy.getGradeSign()), _gradeExec(getGradeExec()) {}

AForm &AForm::operator=(const AForm &toCopy) {
    this->_sign = toCopy.getSign();
    return *this;
}

const   std::string AForm::getName() const{
    return (this->_name);
}

bool    AForm::getSign() const {
    return (this->_sign);
}

int AForm::getGradeSign() const {
    return (this->_gradeSign);
}

int AForm::getGradeExec() const {
    return (this->_gradeExec);
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("AForm: Grade is too low.");
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("AForm: Grade is too high.");
}

const char *AForm::notSignedException::what() const throw() {
    return ("AForm: Form not signed.");
}

std::ostream &operator<<(std::ostream &o, const AForm &AForm)
{
    o << "AForm name: " << AForm.getName() << " - AForm is Signed? " << AForm.getSign() << " - AForm grade to Sign: " 
        << AForm.getGradeSign() << " - AForm grade to Execute: " << AForm.getGradeExec();
    return (o);
}

void    AForm::beSigned(const Bureaucrat &Bureaucrat) {
    if (Bureaucrat.getGrade() > this->getGradeSign())
        throw AForm::GradeTooLowException();
    this->_sign = true;
}

AForm::~AForm() {}  