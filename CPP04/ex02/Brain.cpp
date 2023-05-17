/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:42:24 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 10:23:10 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Getting you a brain!" << std::endl;
}

Brain::Brain(Brain const &toCopy)
{
    std::cout << "Brain Constructor Called" << std::endl;
    *this = toCopy;
}

Brain &Brain::operator=(const Brain &toCopy)
{
    std::cout << "Brain Copy assigment operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (toCopy.getIdea(i).length() > 0)
            this->setIdea(i, toCopy.getIdea(i));
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor Called" << std::endl;
}

void Brain::setIdea(int nbr, std::string idea)
{
    if (nbr >= 0 && nbr < 100)
        this->idea[nbr] = idea;
    else
        std::cout << "Not a valid place of brain ideas." << std::endl;
}

std::string Brain::getIdea(int nbr) const
{
    if (nbr >= 0 && nbr < 100)
        return (this->idea[nbr]);
    else
        return ("Not a valid place of brain ideas\n.");
}