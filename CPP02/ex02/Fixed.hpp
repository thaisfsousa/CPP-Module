/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:09:19 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/19 17:07:37 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <cmath>

class Fixed {
private:
    int value;
    static const int bits = 8;
    
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float floatNbr);
    ~Fixed();
    Fixed (Fixed const &toCopy);
    Fixed& operator=(Fixed const &fixedPoint);
    bool operator>(Fixed const &fixedPoint);
    bool operator<(Fixed const &fixedPoint);
    bool operator>=(Fixed const &fixedPoint);
    bool operator<=(Fixed const &fixedPoint);
    bool operator==(Fixed const &fixedPoint);
    bool operator!=(Fixed const &fixedPoint);
    Fixed operator+(Fixed const &fixedPoint) const;
    Fixed operator-(Fixed const &fixedPoint) const;
    Fixed operator*(Fixed const &fixedPoint) const;
    Fixed operator/(Fixed const &fixedPoint) const;
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);
    static const Fixed min(const Fixed& a, const Fixed& b);
    static Fixed min(Fixed& a, Fixed& b);
    static Fixed max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    int getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
    void    setRawBits(int const raw);

};

std::ostream &operator<<(std::ostream & o, Fixed const &FixedPoint);

#endif
