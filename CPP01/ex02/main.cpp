/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:35:12 by thsousa           #+#    #+#             */
/*   Updated: 2023/02/26 19:51:57 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

int main()
{
  std::string firstOne = "HI THIS IS BRAIN";
  std::string *stringPTR = &firstOne;
  std::string &stringREF = firstOne;

  std::cout << "\033[38;5;198m MEMORY ADDRESSES: \033[m" << std::endl;
  std::cout << &firstOne << "\n";
  std::cout << stringPTR << "\n";
  std::cout << &stringREF << "\n";
  std::cout << "_______________________________" << std::endl;
  std::cout << "\033[38;5;198m VALUES: \033[m" << std::endl;
  std::cout << firstOne << "\n";
  std::cout << *stringPTR << "\n";
  std::cout << stringREF << "\n";
}