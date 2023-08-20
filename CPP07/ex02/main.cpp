/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:20:56 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 13:16:03 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	std::srand(std::time(0));

	try {
		Array<std::string> fruits(3);
		fruits[0] = "banana";
		fruits[1] = "apple";
		fruits[2] = "watermelon";
        std::cout << std::endl << "Fruits Array: " << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << fruits[i] << "; ";
		Array<std::string> fruitCopy(fruits);
        std::cout << std::endl << "Fruits from Copy: " << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << fruitCopy[i] << "; ";
        std::cout << std::endl << "Number of elements in fruits Array: " << fruits.size() << std::endl;

		Array<int> nbr(3);
        std::cout << std::endl << "Nbr Array: " << std::endl;
		for (int i = 0; i < 3; i++) {
			nbr[i] = rand() % 100;
			std::cout << nbr[i] << "; ";
		}
        std::cout << std::endl << "Number of elements in nbr Array: " << nbr.size() << std::endl;
        std::cout << nbr[8] << std::endl;
    }
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}