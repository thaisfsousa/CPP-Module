/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:38:43 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:18:06 by thaissousa       ###   ########.fr       */
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
    Brain *brain;

public:
    WrongCat();
    WrongCat(WrongCat const &toCopy);
    WrongCat &operator=(const WrongCat &toCopy);
    ~WrongCat();
    virtual void makeSound() const;
    void setIdea(int nbr, std::string idea);
    std::string getIdea(int nbr) const;
};

#endif