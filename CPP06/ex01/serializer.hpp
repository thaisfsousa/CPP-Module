/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:28 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/20 19:52:45 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

typedef struct {
    std::string name;
    int         content;
}   Data;


class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &toCopy);
    public:
        ~Serializer();
        Serializer &operator=(const Serializer &toCopy);
        static uintptr_t   srialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif