/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsousa <thsousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:14:24 by thsousa           #+#    #+#             */
/*   Updated: 2023/04/02 13:30:35 by thsousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void Harl::debug(void)
{
  std::cout << "\033[0;35m I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \n \033[0;m";
}

void Harl::info(void)
{
  std::cout << "\033[38;5;198m I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! \n\033[m";
}

void Harl::warning(void)
{
  std::cout << "\033[1;37m I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. \n\033[m";
}

void Harl::error(void)
{
  std::cout << "\033[1;31m This is unacceptable! I want to speak to the manager now. \n\033[m";
}

void Harl::complain(std::string level)
{
  void (Harl::*memberFunction[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string actions[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int i = 0;

  while (i < 4)
  {
    if (level == actions[i])
      (this->*memberFunction[i])();
    i++;
  }
}

Harl::~Harl()
{
  std::cout << "\n \033[1;32m Bye bye Harl. \n \033[0m";
}