/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalvo4 <acalvo4@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:24 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/02 14:55:10 by acalvo4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
	int newClass = rand() % 3;
	if (newClass == 0)
		return new A();
	else if (newClass == 1)
		return new B();
	return new C();
}

void	identify(Base *p){
		if (dynamic_cast<A *>(p) != NULL)
		{
			std::cout << "type of pointer: A." << std::endl;
			return;
		}
		if (dynamic_cast<B *>(p) != NULL)
		{
			std::cout << "type of pointer: B." << std::endl;
			return;
		}
		if (dynamic_cast<C *>(p) != NULL)
		{
			std::cout << "type of pointer: C." << std::endl;
			return;
		}
}

void	identify(Base &p){
	try{
			if (dynamic_cast<A *>(&p) != NULL)
			{
				std::cout << "type of pointer: A." << std::endl;
				return;
			}
			if (dynamic_cast<B *>(&p) != NULL)
			{
				std::cout << "type of pointer: B." << std::endl;
				return;
			}
			if (dynamic_cast<C *>(&p) != NULL)
			{
				std::cout << "type of pointer: C." << std::endl;
				return;
			}
		}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int main() {
	std::srand(std::time(0));

	Base *ptr = generate();
	identify(ptr);
	delete ptr;

	Base *ptr2 = generate();
	Base &ref = *ptr2;
	identify(ref);
	delete ptr2;

	return 0;
}