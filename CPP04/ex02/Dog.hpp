/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:07:44 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:02:38 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(Dog const &toCopy);
    Dog &operator=(const Dog &toCopy);
    ~Dog();
    virtual void makeSound() const;
    void setIdea(int nbr, std::string idea);
    std::string getIdea(int nbr) const;
};

#endif
