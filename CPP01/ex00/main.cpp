/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:21:18 by thsousa           #+#    #+#             */
/*   Updated: 2023/02/26 19:29:49 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
  Zombie *horde;
  std::string heapName;
  std::string zombieName;

  std::cout << "\033[1;31mInsert your heap name:\033[m \n";
  std::getline(std::cin, heapName);
  horde = newZombie(heapName);
  std::cout << "\033[1;31mInsert your Zombie name:\033[m \n";
  std::getline(std::cin, zombieName);
  randomChump(zombieName);
  horde->announce();
  delete horde;
  return (0);
}