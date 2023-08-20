/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:25:11 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:28:08 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src) {
	*this = src;
}

PmergeMe PmergeMe::operator=(const PmergeMe &src) {
	this->_list = src._list;
	this->_vector = src._vector;
	return *this;	
}

PmergeMe::~PmergeMe() {}

template<typename Container>
void sortContainer(Container &container) {
	Container left;
	Container right;
	size_t i = 0;
	typename Container::iterator it = container.begin();

	if (container.size() <= 1)
		return;
	while (i < container.size() / 2) {
		left.push_back(*it);
		++it;
		++i;
	}
	while (i < container.size()) {
		right.push_back(*it);
		++it;
		++i;
	}

	sortContainer(left);
	sortContainer(right);

	container.clear();
	typename Container::iterator leftIt = left.begin();
	typename Container::iterator rightIt = right.begin();
	while (leftIt != left.end() && rightIt != right.end()) {
		if (*leftIt < *rightIt) {
			container.push_back(*leftIt);
			++leftIt;
		}
		else {
			container.push_back(*rightIt);
			++rightIt;
		}
	}
	container.insert(container.end(), leftIt, left.end());
	container.insert(container.end(), rightIt, right.end());
}

bool PmergeMe::parser(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		int buffer = atoi(argv[i]);
		if (buffer <= 0) {
			std::cerr << "Error" << std::endl;
			return false;
		}
		this->_vector.push_back(buffer);
		this->_list.push_back(buffer);
	}
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return true;
}

void PmergeMe::execute(int argc, char **argv) {
	if (!parser(argc, argv))
		return;
	clock_t beginTime = clock();
	sortContainer(this->_vector);
	clock_t vectorTime = clock() - beginTime;

	beginTime = clock();
	sortContainer(this->_list);
	clock_t listTime = clock() - beginTime;
	
	std::cout << "After: ";
	for (std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << static_cast<double>(vectorTime) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::list : " << static_cast<double>(listTime) / CLOCKS_PER_SEC * 1000 << " ms" << std::endl;
}