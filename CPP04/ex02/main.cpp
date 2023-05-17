/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:40:29 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 11:26:58 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *Anima[3];

    Anima[0] = new Cat();
    Anima[1] = new Dog();
    Anima[2] = new Cat();

    // Anima[3] = new Animal();

    delete Anima[0];
    delete Anima[1];
    delete Anima[2];
}