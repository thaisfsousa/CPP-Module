/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaissousa <thaissousa@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:46:57 by thaissousa        #+#    #+#             */
/*   Updated: 2023/08/19 19:58:27 by thaissousa       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <stdlib.h>

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T &a, const T &b){
    return (b <= a ? b : a);
}

template <typename T>
T max(const T &a, const T &b){
    return (b >= a ? b : a);
}

#endif