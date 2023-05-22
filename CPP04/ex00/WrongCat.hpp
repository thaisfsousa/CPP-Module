/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:38:43 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/22 19:57:13 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
    WrongCat();
    WrongCat(WrongCat const &toCopy);
    WrongCat &operator=(const WrongCat &toCopy);
    ~WrongCat();
    void makeSound() const;
};

#endif
