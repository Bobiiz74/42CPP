/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:31:20 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 12:32:06 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)    {
    std::cout << "Construtor AMateria called." << std::endl;
    return;
} 

AMateria::AMateria(const AMateria& src)   {
    std::cout << "Copy AMateria constructor called." << std::endl;
    *this = src;
    return;
}

AMateria & AMateria::operator=(const AMateria& rhs)    {
    std::cout << "Assignement AMateria constructor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

AMateria::~AMateria(void)   {
    std::cout << "Destructor AMateria called." << std::endl;
    return;
}