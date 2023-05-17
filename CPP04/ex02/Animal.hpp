/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:44:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 11:26:16 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"

class Animal
{
protected:
    std::string type;

public:
    Animal();
    Animal(Animal const &toCopy);
    Animal &operator=(const Animal &toCopy);
    void setType(std::string name);
    std::string getType() const;
    virtual void makeSound() const = 0;
    virtual ~Animal();
};

#endif
