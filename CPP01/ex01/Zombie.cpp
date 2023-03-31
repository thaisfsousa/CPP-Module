/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:21:08 by thsousa           #+#    #+#             */
/*   Updated: 2023/02/26 19:21:09 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::announce(void)
{
  std::cout << this->_name << " BraiiiiiiinnnzzzZ..\n";
}

void Zombie::setName(std::string name)
{
  this->_name = name;
}

Zombie::~Zombie()
{
  std::cout << this->_name << " is dead.\n";
}