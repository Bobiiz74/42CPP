/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgodtsch <rgodtsch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:57:39 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/23 10:57:57 by rgodtsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"














template <typename T>
int easyfind(T& type, int toFound){
    typename T::const_iterator it = std::find(type.begin(), type.end(), toFound);
    if(it == type.end())
        return(std::cout << "No occurence founded for " << toFound << std::endl, *it);
    else
        return (std::cout << "Occurence " << *it << " founded !" << std::endl, *it);
}