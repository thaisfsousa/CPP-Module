/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:08:28 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:54:22 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(Cat const &toCopy);
    Cat &operator=(Cat const &toCopy);
    ~Cat();
    virtual void makeSound() const;
    void setIdea(int nbr, std::string idea);
    std::string getIdea(int nbr) const;
};

#endif
