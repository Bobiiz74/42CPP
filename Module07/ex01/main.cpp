/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:47 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/24 14:34:16 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template < typename T >
void    plusOneFunc(T& i){
    i += 1;
    std::cout << i << " ";
}

template < typename T >
void printElement(T& element) {
    std::cout << element << " ";
}

int main( void ) {
int array[] = {1, 2, 3, 4, 5};
iter(array, 5, printElement);
std::cout << std::endl;
iter(array, 5, plusOneFunc);
std::cout << std::endl;

char str[] = {'a', 'b', 'c', 'd', 'e'};
iter(str, 5, printElement);
std::cout << std::endl;
iter(str, 5, plusOneFunc);
std::cout << std::endl;

return(0);
}
