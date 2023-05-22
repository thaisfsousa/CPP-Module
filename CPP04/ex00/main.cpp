/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:40:29 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/22 20:00:44 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     const Animal *meta = new Animal();
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     const WrongAnimal *k = new WrongCat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); // will output the cat sound!
//     j->makeSound();
//     k->makeSound();
//     meta->makeSound();
//     return 0;
// }

int main(void)
{
    std::cout << "----- Constructors -----" << std::endl;
    const Animal *meta = new Animal();
    const Animal *i = new Cat();
    const Animal *j = new Dog();
    std::cout << std::endl;

    std::cout << "----- Class methods -----" << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    meta->makeSound();
    i->makeSound();
    j->makeSound();
    std::cout << std::endl;

    std::cout << "----- Constructors -----" << std::endl;
    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongI = new WrongCat();
    std::cout << std::endl;

    std::cout << "----- Class methods -----" << std::endl;
    std::cout << wrongMeta->getType() << std::endl;
    std::cout << wrongI->getType() << std::endl;
    wrongMeta->makeSound();
    wrongI->makeSound();
    std::cout << std::endl;

    std::cout << "----- Destructors -----" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0;
}