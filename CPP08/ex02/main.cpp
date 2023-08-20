/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:20:04 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 17:29:23 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	MutantStack<int> mstack;

	std::cout << "----- SUBJECT TEST -----" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of MutantStack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of MutantStack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "New size of MutantStack: "<< mstack.size() << std::endl;

	std::cout << "----- NEW TEST -----" << std::endl;
	MutantStack<std::string> friendStack;
	std::string friends[10] = {"Anna", "Thais", "Fabricio", "Raoni", "Gustavo", "Joao P.", "Sergio", "Douglas", "Fernando", "Ale"};
	for (int i = 0; i < 10; i++)
		friendStack.push("friend " + friends[i]);
	std::cout << "Size of FriendStack: " << friendStack.size() << std::endl;
	std::cout << "Top of FriendStack: " << friendStack.top() << std::endl;
	friendStack.pop();
	std::cout << "Size after pop top: " << friendStack.size() << std::endl;
	for (MutantStack<std::string>::iterator mit = friendStack.begin(); mit != friendStack.end(); mit++)
		std::cout << *mit << std::endl;
	return 0;
}