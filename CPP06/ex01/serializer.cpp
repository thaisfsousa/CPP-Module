/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:31 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/20 19:48:15 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &toCopy){
    *this = toCopy;
}

Serializer &Serializer::operator=(const Serializer &toCopy){
    (void) toCopy;
    return *this;
}

Serializer::~Serializer(){}