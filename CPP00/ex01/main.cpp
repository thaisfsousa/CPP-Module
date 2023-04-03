/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:22:26 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/28 17:50:51 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print_init()
{
  std::cout << "\033[1;34m Insert a command: \n \033[0m";
  std::cout << "\033[1;32m ADD->  add a new contact. \n \033[0m";
  std::cout << "\033[1;33m SEARCH-> show a list of your already add contacts. \n \033[0m";
  std::cout << "\033[1;37m EXIT ->  close your PhoneBook! \n \033[0m";
}

int main()
{
  PhoneBook newPhoneBook;
  std::string aux;

  while (1)
  {
    print_init();
    getline(std::cin, aux);
    if (!aux.compare("add") || (!aux.compare("ADD")))
      newPhoneBook.newContact();
    else if (!aux.compare("search") || (!aux.compare("SEARCH")))
      newPhoneBook.printContact();
    else if (!aux.compare("exit") || (!aux.compare("EXIT")))
    {
        std::cout << "\033[1;32m PhoneBook finished. \n\033[0m";
        break;
    }
    else
      std::cout << "\033[1;31m Invalid command. \n \033[0m";
  }
  return (0);
}