/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:46:58 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:07:35 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	try {
		AForm *form;
		AForm *file;
		Intern Cadete;
		Bureaucrat Staff("Lucas", 1);

		form = Cadete.makeForm("robotomy request", "RUSH00");
		file = Cadete.makeForm("shrubbery creation", "createFile"),
		Staff.signForm(*form);
		Staff.signForm(*file);
		Staff.executeForm(*form);
		Staff.executeForm(*file);

		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}