/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:36:51 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:22:03 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("DefaultName"), _grade(150)
{
    std::cout << "Constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy)
{
    *this = toCopy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toCopy)
{
    this->_grade = toCopy.getGrade();
    return *this;
}

const   std::string Bureaucrat::getName() const{
    return (this->_name);
}

int Bureaucrat::getGrade() const {
    return (this->_grade);
}

void    Bureaucrat::decrementGrade() {
    if (this->getGrade() == 150)
        throw GradeTooLowException();
    this->_grade++;
}

void    Bureaucrat::incrementGrade() {
    if (this->getGrade() == 1)
        throw GradeTooHighException();
    this->_grade--;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low.");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high.");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &Bureau)
{
    o << Bureau.getName() << ", bureaucrat grade " << Bureau.getGrade();
    return (o);
}

Bureaucrat::~Bureaucrat() {}