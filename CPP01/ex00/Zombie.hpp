/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:16:44 by thsousa           #+#    #+#             */
/*   Updated: 2023/03/30 14:25:51 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Zombie
{
  private:
    std::string _name;

  public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif