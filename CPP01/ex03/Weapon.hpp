/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:00 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:37:48 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <sstream>

class Weapon
{
  private:
    std::string _type;

  public:
    Weapon(std::string type);
    ~Weapon();

    void setType(std::string type);
    const std::string getType();
};

#endif