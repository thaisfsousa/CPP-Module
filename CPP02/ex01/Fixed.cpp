/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:19:26 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/11 15:30:38 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(Fixed &toCopy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = toCopy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->setRawBits (nbr * ( 1 << this->bits));
}

Fixed::Fixed(const float floatNbr)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->setRawBits (floatNbr / ( 1 << this->bits));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

 void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}
