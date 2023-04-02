/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:17:46 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/28 17:57:57 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Contact
{
private:
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string phoneNumber;
  std::string darkestSecret;

public:
  std::string getFirstName();
  std::string getLastName();
  std::string getNickName();
  std::string getPhoneNumber();
  std::string getDarkestSecret();
  Contact addContact();
  void get_error(std::string cmd, std::string param, std::string *input);
  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setNickName(std::string nickName);
  void setPhoneNumber(std::string phoneNumber);
  void setDarkestSecret(std::string DarkestSecret);
};


#endif