/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:41:07 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 16:38:12 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
  private:
    std::string name;
    Weapon &weapon;

  public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

    void attack();
};

#endif