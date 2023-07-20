/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:31 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/20 19:50:08 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "base.hpp"

Base::Base(){}

Base::Base(const Base &toCopy){
    *this = toCopy;
}

Base &Base::operator=(const Base &toCopy){
    (void) toCopy;
    return *this;
}

Base::~Base(){}