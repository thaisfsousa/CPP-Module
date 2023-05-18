/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:57:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 22:07:57 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default Constructor Called" << std::endl;
    Animal::setType("Dog");
}

Dog::Dog(Dog const &toCopy)
{
    std::cout << "Dog Constructor Called" << std::endl;
    *this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
    std::cout << "Dog Copy assigment operator called" << std::endl;
    Animal::operator=(toCopy);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "🐶 AU AU 🐶 " << std::endl;
}