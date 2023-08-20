/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:10:11 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/19 20:18:40 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printStr(const std::string &str) {
  std::cout << str << std::endl;
}

void checkNbr(const int &nbr){
    (nbr > 10 ? printStr("Your number is bigger than 10") : printStr("Your number is lower than 10"));
}

int main() {
	std::string strArray[] = {
		"cadete",
		"cadeteThais",
		"cadeteTeste"
	};
	::iter(strArray, 3, printStr);

	int intArray[] = {9000, 2, 42};
	::iter(intArray, 3, checkNbr);

	return 0;
}