/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:25 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/20 14:07:15 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >
T const min(T const & a, T const & b){
    return(a <= b ? a : b);
}

template < typename T >
T const max(T const & a, T const & b){
    return(a >= b ? a : b);
}

template < typename T >
void swap(T & a, T & b){
    T c;
    c = a;
    a = b;
    b = c;
}
