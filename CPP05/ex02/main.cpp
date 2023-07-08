/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:46:58 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:11:19 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat Staff("Lucas", 42);
		Bureaucrat Staff1("Bia", 1);
		//AForm form("genericForm", 50, 50);
		ShrubberyCreationForm test("home");
		RobotomyRequestForm test2("lucky");
		PresidentialPardonForm test3("fabricio");

		Staff.signForm(test);
		Staff.signForm(test2);
		Staff1.signForm(test3);
		Staff.executeForm(test);
		Staff.executeForm(test2);
		Staff1.executeForm(test3);
		Staff.executeForm(test3);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}