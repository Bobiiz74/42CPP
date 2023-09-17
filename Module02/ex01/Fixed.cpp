/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:00:01 by robin             #+#    #+#             */
/*   Updated: 2023/09/17 12:05:05 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) :  _rawBits(0) {
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int const n): _rawBits(n << this->_fraction) {
	std::cout << "Int constructor called " << std::endl;
	return ;
}

Fixed::Fixed(float const r) :_rawBits(roundf(r * (1 << this->_fraction))) {
	std::cout << "Float constructor called " << std::endl;
	return ;
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
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (float)(1 << this->_fraction));
}

int Fixed::toInt(void) const {
	return (this->_rawBits >> this->_fraction);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}