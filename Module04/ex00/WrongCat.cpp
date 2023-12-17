/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:52:06 by robin             #+#    #+#             */
/*   Updated: 2023/12/17 15:25:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)  {
    std::cout << "Construtor WrongCat called." << std::endl;
    _type = "WrongCat";
    return;
} 

WrongCat::WrongCat(const WrongCat& src)   {
    std::cout << "Copy WrongCat constructor called." << std::endl;
    _type = src._type;
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