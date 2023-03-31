/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:09 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:38:33 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
    std::string name;
    Weapon *weapon;

  public:
    HumanB(std::string name);
    ~HumanB();

    void  setWeapon(Weapon &weapon);
    void  attack();
};

#endif