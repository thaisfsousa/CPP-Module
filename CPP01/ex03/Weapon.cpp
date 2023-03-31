/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:11 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:42:19 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
  this->_type = type;
}

Weapon::Weapon(std::string type)
{
  std::cout << "Constructor" << std::endl;
  this->setType(type);
}

Weapon::~Weapon()
{
  std::cout << "Destructor" << std::endl;
}

const std::string Weapon::getType()
{
  return (this->_type);
}