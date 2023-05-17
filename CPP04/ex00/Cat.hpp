/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:08:28 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:16:43 by thaissousa       ###   ########.fr       */
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
public:
    Cat();
    Cat(Cat const &toCopy);
    Cat &operator=(Cat const &toCopy);
    ~Cat();
    void setType(std::string name);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
