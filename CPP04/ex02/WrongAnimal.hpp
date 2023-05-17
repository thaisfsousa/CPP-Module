/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:08:20 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:34:49 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include "Brain.hpp"

class WrongAnimal
{
protected:
    std::string type;
    WrongAnimal();
    WrongAnimal(WrongAnimal const &toCopy);
    WrongAnimal &operator=(const WrongAnimal &toCopy);

public:
    void setType(std::string name);
    std::string getType() const;
    virtual void makeSound() const;
    virtual ~WrongAnimal();
};

#endif