/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:24 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/14 20:57:34 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data;

	data.name = "testData";
	data.nbr = 42;
	std::cout << "data name is " << data.name << " and data nbr is " << data.nbr << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	std::cout << "ptr is " << ptr << std::endl;
	Data *dataPtr = Serializer::deserialize(ptr);
	std::cout << "dataPtr name is " << dataPtr->name << " and dataPtr nbr is " << dataPtr->nbr << std::endl;
	return 0;
}