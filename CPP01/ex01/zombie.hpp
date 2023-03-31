/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:16:44 by thsousa           #+#    #+#             */
/*   Updated: 2023/02/26 17:33:48 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
Zombie *zombieHorde(int N, std::string name);

#endif