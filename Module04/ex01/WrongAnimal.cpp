/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:19:23 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:27:27 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)    {
    std::cout << "Construtor WrongAnimal called." << std::endl;
    return;
} 

WrongAnimal::WrongAnimal(std::string type) :  _type(type) {
    std::cout << "Creation of WrongAnimal." << std::endl;
    return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)   {
    std::cout << "Copy WrongAnimal constructor called." << std::endl;
    *this = src;
    return;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal& rhs)    {
    std::cout << "Assignement WrongAnimal constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)   {
    std::cout << "Destructor WrongAnimal called." << std::endl;
    return;
}

std::string WrongAnimal::getType() const {
    return(this->_type);
}

void    WrongAnimal::makeSound(void) const {
    std::cout << "Is it barkbark or meowmeow ?" << std::endl;
}