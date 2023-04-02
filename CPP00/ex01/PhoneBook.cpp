/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:47:43 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/02 13:41:48 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->countContacts = 0;
}

int PhoneBook::getCount()
{
    return (this->countContacts);
}

void PhoneBook::setCount()
{
    this->countContacts = this->countContacts + 1;
}

void PhoneBook::newContact()
{
    Contact newContact;
    int index;

    newContact = newContact.addContact();
    index = this->getCount() % 8;
    // if (this->getCount() > 8)
    //     this->countContacts = 0;
    this->setCount();
    this->contacts[index] = newContact;
}

void PhoneBook::printComplete(Contact cont)
{
    std::cout << "\033[100m\n";
    std::cout << "First Name: " << cont.getFirstName() << "\n";
    std::cout << "Last Name: " << cont.getLastName() << "\n";
    std::cout << "Nick Name: " << cont.getNickName() << "\n";
    std::cout << "Phone Number: " << cont.getPhoneNumber() << "\n";
    std::cout << "Darkest Secret: " << cont.getDarkestSecret();
    std::cout << "\033[m\n";
}

void PhoneBook::printSearchStart()
{
    std::cout << "\033[38;5;198m ___________________________________________\033[m \n";
    std::cout << "\033[38;5;198m|     Index|First Name| Last Name|  Nickname|\033[m \n";
}

void printableContact(std::string str)
{
    int i;
    int len;
    if (str.length() > 10)
    {
        for (i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    }
    else
    {
        len = 10 - str.length();
        while (len--)
            std::cout << " ";
        std::cout << str;
    }
}
void PhoneBook::printSearchEnd()
{
    std::cout << "\033[38;5;198m ___________________________________________\033[m \n";
}

void PhoneBook::printTable(Contact cntt, int index)
{
    std::cout << "\033[38;5;198m|\033[m";
    std::cout << "         " << index;
    std::cout << "\033[38;5;198m|\033[m";
    printableContact(cntt.getFirstName());
    std::cout << "\033[38;5;198m|\033[m";
    printableContact(cntt.getLastName());
    std::cout << "\033[38;5;198m|\033[m";
    printableContact(cntt.getNickName());
    std::cout << "\033[38;5;198m|\033[m";
}

void PhoneBook::printContact()
{
    std::string index;
    this->printSearchStart();
    int i = 0;
    int nbr;
    int count;
    if (this->getCount() > 7)
        count = 8;
    else
        count = getCount();
    while (i < count)
    {
        this->printTable(this->contacts[i], i + 1);
        std::cout << "\n";
        i++;
    }
    this->printSearchEnd();
    try
    {
        std::cout << "\033[1;37m  Insert a index to select a contact. \033[m \n";
        std::getline(std::cin, index);
        nbr = stoi(index);
    }
    catch (...)
    {
        std::cout << "\033[1;31m  Not valid input. \033[m \n";
        return;
    }
    if (nbr > 8 || nbr <= 0 || nbr > getCount())
        std::cout << "\033[1;31m Invalid index. \033[m \n";
    else
        printComplete(this->contacts[nbr - 1]);
}
