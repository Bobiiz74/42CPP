/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:06 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:13:06 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)  : AAnimal("Cat") {
    std::cout << "Construtor Cat called." << std::endl;
    brain = new Brain();
    return;
} 

Cat::Cat(const Cat& src)   {
    std::cout << "Copy Cat constructor called." << std::endl;
    *this = src;
    return;
}

Cat & Cat::operator=(const Cat& rhs)    {
    std::cout << "Assignement Cat constructor called" << std::endl;
    if (this != &rhs)
    {
        this-> _type = rhs._type;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

Cat::~Cat(void)   {
    std::cout << "Destructor Cat called." << std::endl;
    delete brain;
    return;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow Meow" << std::endl;
}

std::string Cat::getType() const {
    return(this->_type);
}