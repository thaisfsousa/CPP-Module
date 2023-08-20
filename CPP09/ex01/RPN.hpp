/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:21:23 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:22:48 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

# include <iostream>
# include <stack>

class RPN {
	private:
		std::stack<int> _stack;
	public:
		RPN();
		RPN(const RPN &src);
		~RPN();
		RPN operator=(const RPN &src);
		void execute(const std::string &exp);
};

#endif