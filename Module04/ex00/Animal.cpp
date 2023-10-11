/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:19:23 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 16:47:56 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)    {
    std::cout << "Construtor Animal called." << std::endl;
    return;
} 

Animal::Animal(std::string type) :  _type(type) {
    std::cout << "Creation of Animal." << std::endl;
    return;
}

Animal::Animal(const Animal& src)   {
    std::cout << "Copy Animal constructor called." << std::endl;
    *this = src;
    return;
}

Animal & Animal::operator=(const Animal& rhs)    {
    std::cout << "Assignement Animal constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Animal::~Animal(void)   {
    std::cout << "Destructor Animal called." << std::endl;
    return;
}

std::string Animal::getType() const {
    return(this->_type);
}

void    Animal::makeSound(void) const {
    std::cout << "Is it barkbark or meowmeow ?" << std::endl;
}