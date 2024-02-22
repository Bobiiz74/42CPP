/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:54:42 by robin             #+#    #+#             */
/*   Updated: 2024/02/22 16:37:44 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
int easyfind(T& type, int toFound){
    typename T::const_iterator it = std::find(type.begin(), type.end(), toFound);
    if(it == type.end()){
        std::cout << "No occurence founded for " << toFound << std::endl;
        return(*it);
    }
    else
        return (std::cout << "Occurence " << *it << " founded !" << std::endl, *it);
}


#endif
