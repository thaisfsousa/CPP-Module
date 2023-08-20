/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:21:59 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:23:36 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src) {
	*this = src;
}

RPN RPN::operator=(const RPN &src) {
	this->_stack = src._stack;
	return *this;
}

RPN::~RPN() {}

static bool isValidExpression(const std::string &exp) {
	if (!isdigit(exp[0]) || !isdigit(exp[2]))
		return false;
	for (unsigned int i = 0; i < exp.length(); i++) {
		if (!(isdigit(exp[i]) || exp[i] == '+' || exp[i] == '-' || \
			exp[i] == '/' || exp[i] == '*' || exp[i] == ' '))
			return false;
		if ((i % 2 != 0 && exp[i] != ' ') || (i % 2 == 0 && exp[i] == ' '))
			return false;
	}
	return true;
}

void RPN::execute(const std::string &exp) {
	if (!isValidExpression(exp)) {
		std::cerr << "Error" << std::endl;
		return;
	}
	for (unsigned int i = 0; i < exp.length(); i++) {
		if (i % 2 == 0) {
			if (isdigit(exp[i]))
				this->_stack.push(exp[i] - 48);
			else {
				int buffer = this->_stack.top();
				this->_stack.pop();
				if (exp[i] == '+')
					buffer = this->_stack.top() + buffer;
				else if (exp[i] == '-')
					buffer = this->_stack.top() - buffer;
				else if (exp[i] == '/')
					buffer = this->_stack.top() / buffer;
				else
					buffer = this->_stack.top() * buffer;
				this->_stack.pop();
				this->_stack.push(buffer);
			}
		}
	}
	std::cout << this->_stack.top() << std::endl;
}