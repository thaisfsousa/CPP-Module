/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:44:32 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/08 20:24:33 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat Thais("Thais", 3);
        std::cout << Thais << std::endl;
        Thais.decrementGrade();
        Thais.incrementGrade();
        Thais.decrementGrade();
        std::cout << Thais << std::endl;
        Bureaucrat Raoni("Raoni", 150);
        std::cout << Raoni << std::endl;
        Raoni.decrementGrade();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}