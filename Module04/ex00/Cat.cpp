/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:06 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 16:52:50 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)    {
    std::cout << "Construtor Cat called." << std::endl;
    return;
} 

Cat::Cat(const Cat& src)   {
    std::cout << "Copy Cat constructor called." << std::endl;
    *this = src;
    return;
}

Cat & Cat::operator=(const Cat& rhs)    {
    std::cout << "Assignement Cat constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

Cat::~Cat(void)   {
    std::cout << "Destructor Cat called." << std::endl;
    return;
}

void    Cat::makeSound(void) const {
    std::cout << "Meow Meow" << std::endl;
}