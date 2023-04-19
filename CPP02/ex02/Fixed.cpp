/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:19:26 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:07:50 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::Fixed(Fixed const &toCopy)
{
    *this = toCopy;
}

Fixed& Fixed::operator=(Fixed const &FixedPoint){
    this->value = FixedPoint.getRawBits();
    return *this;
}

Fixed::Fixed(const int nbr)
{
    this->setRawBits(nbr * (1 << this->bits));
}

Fixed::Fixed(const float floatNbr)
{
    this->setRawBits((int)roundf(floatNbr * ( 1 << this->bits)));
}

Fixed::~Fixed()
{
}

bool Fixed::operator>(Fixed const &fixedPoint)
{
    return (this->value > fixedPoint.getRawBits());
}

bool Fixed::operator<(Fixed const &fixedPoint)
{
    return (this->value < fixedPoint.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixedPoint)
{
    return (this->value >= fixedPoint.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixedPoint)
{
    return (this->value <= fixedPoint.getRawBits());
}
bool Fixed::operator==(Fixed const &fixedPoint)
{
    return (this->value == fixedPoint.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixedPoint)
{
    return (this->value != fixedPoint.getRawBits());
}

Fixed Fixed::operator+( Fixed const &fixedPoint) const
{
    return (this->toFloat() + fixedPoint.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixedPoint) const
{
    return(this->toFloat() - fixedPoint.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixedPoint) const
{
    return(this->toFloat() * fixedPoint.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixedPoint) const
{
    return(this->toFloat() / fixedPoint.toFloat());
}

Fixed Fixed::operator++(int)
{
    Fixed aux(*this);
    this->setRawBits(aux.value + 1);
    return (aux);
}

Fixed& Fixed::operator++(void)
{
    this->setRawBits(this->value + 1);
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed aux(*this);
    this->setRawBits(aux.value - 1);
    return (aux);
}

Fixed& Fixed::operator--(void)
{
    this->setRawBits(this->value - 1);
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

int Fixed::toInt() const 
{
    return (this->getRawBits() / (1 << this->bits));
}

float Fixed::toFloat() const
{
    return float(this->getRawBits()) / (1 << this->bits);
}

 void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

const Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    else
        return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    else
        return (b);
}

std::ostream & operator<<(std::ostream & o, Fixed const & FixedPoint)
{
    o << FixedPoint.toFloat();
    return o;
}