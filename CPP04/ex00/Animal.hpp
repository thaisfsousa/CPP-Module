/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:44:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:20:03 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(Animal const &toCopy);
    Animal &operator=(const Animal &toCopy);
    virtual ~Animal();
    void setType(std::string name);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
