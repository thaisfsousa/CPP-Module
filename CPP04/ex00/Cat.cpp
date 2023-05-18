/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:57:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 22:10:01 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor Called" << std::endl;
    Animal::setType("Cat");
}

Cat::Cat(Cat const &toCopy)
{
    std::cout << "Cat Constructor Called" << std::endl;
    *this = toCopy;
}

Cat &Cat::operator=(const Cat &toCopy)
{
    std::cout << "Cat Copy assigment operator called" << std::endl;
    Animal::operator=(toCopy);
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << " 🐱 MIAU MIAU 🐱 " << std::endl;
}