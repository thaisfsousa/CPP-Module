/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:57:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/16 20:52:20 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor Called" << std::endl;
    this->setType("Default");
}

Animal::Animal(Animal const &toCopy)
{
    std::cout << "Animal Constructor Called" << std::endl;
    *this = toCopy;
}

Animal &Animal::operator=(const Animal &toCopy)
{
    std::cout << "Animal Copy assigment operator called" << std::endl;
    this->setType(toCopy.getType());
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Destructor Called" << std::endl;
}

void Animal::setType(std::string name)
{
    this->type = name;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound(void) const
{
    std::cout << "...no sound..." << std::endl;
}
