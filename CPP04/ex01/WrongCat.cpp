/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:39:27 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/22 19:58:14 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default Constructor Called" << std::endl;
    WrongAnimal::setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &toCopy)
{
    std::cout << "WrongCat Constructor Called" << std::endl;
    *this = toCopy;
}

WrongCat &WrongCat::operator=(const WrongCat &toCopy)
{
    std::cout << "WrongCat Copy assigment operator called" << std::endl;
    WrongAnimal::setType(toCopy.getType());
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "...faking a MIAU MIAU... " << std::endl;
}