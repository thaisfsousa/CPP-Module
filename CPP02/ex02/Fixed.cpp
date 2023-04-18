/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:19:26 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/18 15:21:01 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default Constructor Called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(Fixed const &toCopy)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = toCopy;
}

Fixed& Fixed::operator=(Fixed const &FixedPoint){
    std::cout << "Copy assigment operator called" << std::endl;
    this->value = FixedPoint.getRawBits();
    return *this;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int Constructor Called" << std::endl;
    this->setRawBits(nbr * (1 << this->bits));
}

Fixed::Fixed(const float floatNbr)
{
    std::cout << "Float Constructor Called" << std::endl;
    this->setRawBits((int)roundf(floatNbr * ( 1 << this->bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed& operator=(Fixed const &fixedPoint)
{

}
Fixed& operator>(Fixed const &fixedPoint)
{
    return (this->value > fixedPoint.getRawBits());
}
Fixed& operator<(Fixed const &fixedPoint)
{

}
Fixed& operator>=(Fixed const &fixedPoint)
{

}
Fixed& operator>=(Fixed const &fixedPoint)
{

}
Fixed& operator==(Fixed const &fixedPoint)
{

}
Fixed& operator!=(Fixed const &fixedPoint)
{

}
Fixed& operator+(Fixed const &fixedPoint)
{
    
}
Fixed& operator-(Fixed const &fixedPoint)
{
    
}
Fixed& operator*(Fixed const &fixedPoint)
{
    
}
Fixed& operator/(Fixed const &fixedPoint)
{

}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

int Fixed::toInt() const 
{
    return (this->getRawBits() / 256);
}

float Fixed::toFloat() const
{
    return float(this->getRawBits()) / 256;
}

 void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

std::ostream & operator<<(std::ostream & o, Fixed const & FixedPoint)
{
    o << FixedPoint.toFloat();
    return o;
}