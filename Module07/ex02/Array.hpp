/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:25 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/21 16:33:57 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template < typename T >
class Array {
private:
        T * _array;
        unsigned int _sizeArray;
        
public:
        Array(void);
        Array(unsigned int n);
        ~Array(void);
        Array(Array const & src);
        Array& operator=(const Array &rhs);
        unsigned int size(void) const;
        
        T& operator[](const unsigned int i);
};

#include "Array.tpp"

#endif
