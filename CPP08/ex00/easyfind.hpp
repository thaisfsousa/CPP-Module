/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:26:26 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/20 13:38:39 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <map>


template <typename T>
typename T::iterator easyFind(T &cntainer, int nbr){
    for (typename T::iterator i = cntainer.begin(); i != cntainer.end(); i++)
    {
        if (*i == nbr)
            return (i);
    }
    throw std::runtime_error("Occurrence not found!");
}

#endif