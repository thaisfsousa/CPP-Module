/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:39:49 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/02 13:10:43 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
  if (argc == 2)
  {
    Harl newHarl;
    std::string aux = argv[1];
    newHarl.filterComplain(aux);
  }
  else
    std::cout << "Missing complain. \n";
  return (0);
}