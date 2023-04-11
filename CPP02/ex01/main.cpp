/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:20:53 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/11 15:32:32 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
//Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a.getRawBits() << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}