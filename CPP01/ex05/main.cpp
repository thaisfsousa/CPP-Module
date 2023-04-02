/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:39:49 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/02 13:48:20 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
  Harl newHarl;
  std::string aux;
  int i = 5;

  while (--i)
  {
    std::cout << "\033[1;37m You have " << i << " complains. Insert your choose. \n \033[0m";
    getline(std::cin, aux);
    if (aux.empty())
      std::cout << "\033[1;31m Not a valid complain. \n\033[m";
    else
      newHarl.complain(aux);
  }
  return (0);
}