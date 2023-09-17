/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:00:01 by robin             #+#    #+#             */
/*   Updated: 2023/09/17 11:22:27 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :  _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl; 
    return;
}

Fixed::Fixed(Fixed const & src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed const &rhs)   {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}