/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:02:18 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/19 20:12:31 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdlib.h>

template <typename T>
void iter(T *array, int len, void (*function)(const T &)){
    for (int i = 0; i < len; i++)
        function(array[i]);
}

#endif