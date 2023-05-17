/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:29:39 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/16 20:52:50 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
    this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(WrongAnimal const &toCopy)
{
    std::cout << "WrongAnimal Constructor Called" << std::endl;
    *this = toCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy)
{
    std::cout << "WrongAnimal Copy assigment operator called" << std::endl;
    this->setType(toCopy.getType());
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::setType(std::string name)
{
    this->type = name;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "...not an animal... " << std::endl;
}