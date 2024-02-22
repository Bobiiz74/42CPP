/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:25 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/22 12:22:36 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template < typename T >
void iter(T* array, int length, void f(T&)) {
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

#endif
