/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:31 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/14 20:57:49 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(const Serializer &toCopy){
    *this = toCopy;
}

Serializer &Serializer::operator=(const Serializer &toCopy){
    (void) toCopy;
    return *this;
}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data *ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t nbr){
    return (reinterpret_cast<Data *>(nbr));
}