/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:06 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:28:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)  : WrongAnimal("WrongCat")  {
    std::cout << "Construtor WrongCat called." << std::endl;
    return;
} 

WrongCat::WrongCat(const WrongCat& src)   {
    std::cout << "Copy WrongCat constructor called." << std::endl;
    *this = src;
    return;
}

WrongCat & WrongCat::operator=(const WrongCat& rhs)    {
    std::cout << "Assignement WrongCat constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

WrongCat::~WrongCat(void)   {
    std::cout << "Destructor WrongCat called." << std::endl;
    return;
}

void    WrongCat::makeSound(void) const {
    std::cout << "Meow Meow" << std::endl;
}

std::string WrongCat::getType() const {
    return(this->_type);
}