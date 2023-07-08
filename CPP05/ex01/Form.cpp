/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:36:51 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:13:24 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("DefaultName"), _sign(false), _gradeSign(150), _gradeExec(150)
{
    std::cout << "Form Constructor Called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _sign(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    if (gradeSign > 150 || gradeExec > 150)
        throw GradeTooLowException();
    else if (gradeSign < 1 || gradeExec < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &toCopy) : _name(toCopy._name), _sign(toCopy.getSign()), _gradeSign(toCopy.getGradeSign()), _gradeExec(getGradeExec()) {}

Form &Form::operator=(const Form &toCopy) {
    this->_sign = toCopy.getSign();
    return *this;
}

const   std::string Form::getName() const{
    return (this->_name);
}

bool    Form::getSign() const {
    return (this->_sign);
}

int Form::getGradeSign() const {
    return (this->_gradeSign);
}

int Form::getGradeExec() const {
    return (this->_gradeExec);
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Form: Grade is too low.");
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Form: Grade is too high.");
}

std::ostream &operator<<(std::ostream &o, const Form &Form)
{
    o << "Form name: " << Form.getName() << " - Form is Signed? " << Form.getSign() << " - Form grade to Sign: " 
        << Form.getGradeSign() << " - Form grade to Execute: " << Form.getGradeExec();
    return (o);
}

void    Form::beSigned(const Bureaucrat &Bureaucrat) {
    if (Bureaucrat.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    this->_sign = true;
}

Form::~Form(){}