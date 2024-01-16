/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:40:25 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/01/16 10:39:02 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)  {
    std::cout << "Construtor Brain called." << std::endl;
    for (int i = 0; i < 100; i++) {
		this->ideas[i] = "";
	}
    return;
} 

Brain::Brain(const Brain& src)   {
    std::cout << "Copy Brain constructor called." << std::endl;
    *this = src;
    return;
}

Brain & Brain::operator=(const Brain& rhs)    {
    std::cout << "Assignement Brain constructor called" << std::endl;
    if (this != &rhs)
    {
        for(int i = 0; i < 100; i++){
            this->ideas[i] = rhs.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain(void)   {
    std::cout << "Destructor Brain called." << std::endl;
    return;
}

std::string Brain::getIdeas(int i) const{
    return(this->ideas[i]);
}