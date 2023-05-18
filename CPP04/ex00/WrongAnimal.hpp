/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:08:20 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 21:59:24 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const &toCopy);
    WrongAnimal &operator=(const WrongAnimal &toCopy);
    virtual ~WrongAnimal();
    void setType(std::string name);
    std::string getType() const;
    void makeSound() const;
};

#endif
