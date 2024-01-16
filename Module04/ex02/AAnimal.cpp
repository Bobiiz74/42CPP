/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:57:34 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:02:44 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)    {
    std::cout << "Construtor AAnimal called." << std::endl;
    return;
} 

AAnimal::AAnimal(std::string type) :  _type(type) {
    std::cout << "Creation of AAnimal." << std::endl;
    return;
}

AAnimal::AAnimal(const AAnimal& src)   {
    std::cout << "Copy AAnimal constructor called." << std::endl;
    *this = src;
    return;
}

AAnimal & AAnimal::operator=(const AAnimal& rhs)    {
    std::cout << "Assignement AAnimal constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

AAnimal::~AAnimal(void)   {
    std::cout << "Destructor AAnimal called." << std::endl;
    return;
}

std::string AAnimal::getType() const {
    return(this->_type);
}

void    AAnimal::makeSound(void) const {
    std::cout << "Its not supposed to make a sound" << std::endl;
}