/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:53:18 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:13:44 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)  : AAnimal("Dog")    {
    std::cout << "Construtor Dog called." << std::endl;
    brain = new Brain();
    return;
} 

Dog::Dog(const Dog& src)    : AAnimal(src)  {
    std::cout << "Copy Dog constructor called." << std::endl;
    *this = src;
    return;
}

Dog & Dog::operator=(const Dog& rhs)    {
    std::cout << "Assignement Dog constructor called" << std::endl;
    if (this != &rhs)
    {
        this-> _type = rhs._type;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

Dog::~Dog(void)   {
    std::cout << "Destructor Dog called." << std::endl;
    delete brain;
    return;
}

void    Dog::makeSound(void) const {
    std::cout << "Bark Bark" << std::endl;
}

std::string Dog::getType() const {
    return(this->_type);
}