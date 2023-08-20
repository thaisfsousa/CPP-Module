/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:36:46 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 13:50:35 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	try {
		std::cout << "----- List -----" << std::endl;
		std::list<int> lst;
		lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        lst.push_back(4);
		lst.push_back(5);
        std::cout << "List: " << std::endl;
        for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
            std::cout << *i << ",  ";
        std::cout << std::endl << "Trying to find a 4." << std::endl;
		for (std::list<int>::iterator i = ::easyFind(lst, 4); i != lst.end(); i++)
			std::cout << *i << ",  ";

		std::cout << std::endl << std::endl << "----- Vector -----" << std::endl;
		std::vector<int> vec;
		vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
		vec.push_back(5);
        std::cout << "Vector: " << std::endl;
        for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
            std::cout << *i << ",  ";
        std::cout << std::endl << "Trying to find a 2." << std::endl;

		for (std::vector<int>::iterator indx = ::easyFind(vec, 2); indx != vec.end(); indx++)
			std::cout << *indx << ",  ";
        std::cout << std::endl << "Trying to find a 10." << std::endl;
        easyFind(vec, 10);
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}