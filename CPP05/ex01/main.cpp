/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:13:11 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 19:57:48 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void) {
	try {
		Bureaucrat Thais("Thais", 5);
		Form form("Formato", 2, 2);

		std::cout << Thais << std::endl;
		std::cout << form << std::endl;
		Thais.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}