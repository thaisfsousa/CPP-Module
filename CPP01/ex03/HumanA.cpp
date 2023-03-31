/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:47:27 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:39:31 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA()
{
    std::cout << "A DELETED \n" ;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n" ;
}
