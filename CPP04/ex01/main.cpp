/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:40:29 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 22:06:35 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main(void)
// {
//     const Animal *meta = new Animal();
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();

//     std::cout << "Animal type and sound. " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound();

//     std::cout << "Animal type and sound. " << std::endl;
//     std::cout << j->getType() << " " << std::endl;
//     j->makeSound();

//     std::cout << "Animal type and sound. " << std::endl;
//     std::cout << meta->getType() << " " << std::endl;
//     meta->makeSound();

//     std::cout << "\nDoing again, but this time WRONG! \n"
//               << std::endl;

//     const WrongAnimal *wrongMeta = new WrongAnimal();
//     const WrongAnimal *wrongI = new WrongCat();
//     std::cout << "Animal type and sound. " << std::endl;
//     std::cout << wrongMeta->getType() << " " << std::endl;
//     wrongMeta->makeSound();
//     std::cout << wrongI->getType() << " " << std::endl;
//     wrongI->makeSound();

//     delete meta;
//     delete j;
//     delete i;
//     delete wrongMeta;
//     delete wrongI;
//     return 0;
// }
int main(void)
{
    std::cout << "----- Constructors -----" << std::endl;
    Animal *animal[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animal[i] = new Dog;
        else
            animal[i] = new Cat;
    }

    std::cout << "----- Class Methods -----" << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << animal[i]->getType() << std::endl;

    std::cout << "----- Destructors -----" << std::endl;
    for (int i = 0; i < 10; i++)
        delete animal[i];

    return 0;
}