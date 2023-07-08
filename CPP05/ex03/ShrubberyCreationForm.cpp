/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:26:24 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:03:47 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", 145, 137), _target("HOME"){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreation", 145, 137), _target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy): AForm(toCopy), _target(toCopy.getTarget()){}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy){
    this->_target = toCopy.getTarget();
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){}


std::string ShrubberyCreationForm::getTarget() const{
    return (this->_target);
}

void    ShrubberyCreationForm::execute(const Bureaucrat &execute) const {
    if (this->getSign() == false)
        throw AForm::notSignedException();
    if (this->getGradeExec() < execute.getGrade())
        throw AForm::GradeTooLowException();
    std::ofstream outfile (this->getTarget() + "_shrubbery");
        outfile << std::endl;
        outfile << std::endl;
        outfile << "                  # #### ####                   " << std::endl;
        outfile << "                ### \\/#|### |/####              " << std::endl;
        outfile << "               ##\\/#/ \\||/##/_/##/_#            " << std::endl;  
        outfile << "             ###  \\/###|/ \\/ # ###              " << std::endl;
        outfile << "           ##_\\_#\\_\\## | #/###_/_####           " << std::endl;         
        outfile << "          ## #### # \\ #| /  #### ##/##          " << std::endl;            
        outfile << "           __#_--###`  |{,###---###-~           " << std::endl;           
        outfile << "                     \\ }{                       " << std::endl;
        outfile << "                      }}{                       " << std::endl;
        outfile << "                      }}{                       " << std::endl;
        outfile << "                      {{}                       " << std::endl;    
        outfile << "                , -=-~{ .-^- _                  " << std::endl;           
        outfile << "                      `}                        " << std::endl;
        outfile << "                       {                        " << std::endl;

        outfile.close();
}