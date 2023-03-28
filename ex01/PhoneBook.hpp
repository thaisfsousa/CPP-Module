/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:48:24 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/28 17:24:51 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
  Contact contacts[8];
  int countContacts;

public:
  PhoneBook();
  int searchContact();
  int exit();
  int getCount();
  void newContact();
  void printSearchEnd();
  void printSearchStart();
  void printContact();
  void printComplete(Contact cntct);
  void printTable(Contact cntct, int index);
  void setCount();
  int tablePrint(std::string aux);
  void finishPhonebook();
};

#endif