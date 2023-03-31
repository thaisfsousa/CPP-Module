/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:50:07 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:44:28 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
    std::cout << "A DELETED \n" ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void  HumanB::attack()
{
    if (this->weapon->getType().empty())
        std::cout << this->name << " attacks with their sadness \n" ;
    std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n" ;
}