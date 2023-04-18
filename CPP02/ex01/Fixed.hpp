/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:09:19 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/18 15:01:06 by thsousa          ###   ########.fr       */
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
    int getRawBits(void) const;
    float   toFloat(void) const;
    int     toInt(void) const;
    void    setRawBits(int const raw);

};

std::ostream &operator<<(std::ostream & o, Fixed const &FixedPoint);

#endif
