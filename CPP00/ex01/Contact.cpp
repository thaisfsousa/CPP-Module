/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:22:29 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/28 17:59:04 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::setFirstName(std::string firstName)
{
  this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
  this->lastName = lastName;
}
void Contact::setNickName(std::string nickName)
{
  this->nickName = nickName;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
  this->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
  this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
  return (this->firstName);
}

std::string Contact::getLastName()
{
  return (this->lastName);
}

std::string Contact::getNickName()
{
  return (this->nickName);
}

std::string Contact::getPhoneNumber()
{
  return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
  return (this->darkestSecret);
}

Contact Contact::addContact()
{
  std::string temp;
  Contact newContact;
  std::cout << "Insert your contact's first name:" << std::endl;
  std::getline(std::cin, temp);
  if (temp.empty())
    get_error("First name",  "Insert your contact's first name:", &temp);
  newContact.setFirstName(temp);
  std::cout << "Insert your contact's last Name: " << std::endl;
  std::getline(std::cin, temp);
  if (temp.empty())
    get_error("Last name", "Insert your contact's last Name: ", &temp);
  newContact.setLastName(temp);
  std::cout << "Insert your contact's nickname: " << std::endl;
  std::getline(std::cin, temp);
  if (temp.empty())
    get_error("Nickname", "Insert your contact's nickname: ", &temp);
  newContact.setNickName(temp);
  std::cout << "Insert your contact's number: " << std::endl;
  std::getline(std::cin, temp);
  if (temp.empty())
    get_error("Number", "Insert your contact's number: ", &temp);
  newContact.setPhoneNumber(temp);
  std::cout << "Insert your contact's darkest secret: " << std::endl;
  std::getline(std::cin, temp);
  if (temp.empty())
    get_error("Darkest secret", "Insert your contact's darkest secret: ", &temp);
  newContact.setDarkestSecret(temp);
  return (newContact);
}

void Contact::get_error(std::string cmd, std::string param, std::string *input)
{
  while(input->empty())
  {
    std::cout << "\033[1;31m ERRO \033[0m \n";
    std::cout << cmd << " can't be empty.\n";
    std::cout << param;
    std::getline(std::cin, *input);
  }
}