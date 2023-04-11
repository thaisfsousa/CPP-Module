/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:09:19 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/11 14:58:22 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Fixed {
private:
    int value;
    static const int bits = 8;
    
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float floatNbr);
    ~Fixed();
    Fixed(Fixed &toCopy);
    //Fixed& operator = (const Fixed& fixedPoint);
    int getRawBits(void) const;
    float   toFloat(void);
    int     toInt(void);
    void    setRawBits(int const raw);

};



#endif
