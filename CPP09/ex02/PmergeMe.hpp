/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:25:19 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 19:27:47 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <list>
# include <vector>
# include <cstdlib>
# include <ctime>

class PmergeMe {
	private:
		std::list<int> _list;
		std::vector<int> _vector;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe operator=(const PmergeMe &srcs);
		~PmergeMe();
		bool parser(int argc, char **argv);
		void getTime();
		void execute(int argc, char **argv);
};

#endif