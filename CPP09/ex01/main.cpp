/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:20:57 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:23:50 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2){
		std::cerr << "Error" << std::endl;
		return 1;
	}
	RPN rpn;
	rpn.execute(argv[1]);
	return 0;
}