/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:38:36 by thaissousa        #+#    #+#             */
/*   Updated: 2023/05/17 09:42:17 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
#define Brain_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>

class Brain
{
private:
    std::string idea[100];

public:
    Brain();
    Brain(Brain const &toCopy);
    Brain &operator=(const Brain &toCopy);
    ~Brain();
    void setIdea(int nbr, std::string idea);
    std::string getIdea(int nbr) const;
};

#endif
