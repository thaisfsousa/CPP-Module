/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:31:28 by thaissousa        #+#    #+#             */
/*   Updated: 2023/07/20 19:50:30 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdint.h>

typedef struct {
    std::string name;
    int         content;
}   Data;


class Base
{
    private:
        Base();
        Base(const Base &toCopy);
    public:
        ~Base();
        Base &operator=(const Base &toCopy);
};

#endif