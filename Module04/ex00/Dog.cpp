/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:53:18 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:08:08 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)    {
    std::cout << "Construtor Dog called." << std::endl;
    return;
} 

Dog::Dog(const Dog& src)   {
    std::cout << "Copy Dog constructor called." << std::endl;
    *this = src;
    return;
}

Dog & Dog::operator=(const Dog& rhs)    {
    std::cout << "Assignement Dog constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Dog::~Dog(void)   {
    std::cout << "Destructor Dog called." << std::endl;
    return;
}

void    Dog::makeSound(void) const {
    std::cout << "Bark Bark" << std::endl;
}