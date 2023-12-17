/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:00:01 by robin             #+#    #+#             */
/*   Updated: 2023/12/17 12:23:06 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) :  _rawBits(0) {
    return;
}

Fixed::Fixed(int const n): _rawBits(n << this->_fraction) {
	return ;
}

Fixed::Fixed(float const r) :_rawBits(roundf(r * (1 << this->_fraction))) {
	return ;
}

Fixed::~Fixed(void) {
    return;
}

Fixed::Fixed(Fixed const & src) {
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed const &rhs)   {
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

/* Comparasion operator */

bool Fixed::operator>(Fixed const &rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const {
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
	return (this->getRawBits() != rhs.getRawBits());
}
/* Basics operations */

Fixed Fixed::operator+(Fixed const &rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*Post fixe operator and prefix operator */

Fixed &Fixed::operator++(void) {
	++(this->_rawBits);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed cpy(*this);
	++(*this);
	return (cpy);
}

Fixed &Fixed::operator--(void) {
	--(this->_rawBits);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed cpy(*this);
	--(*this);
	return (cpy);
}

/* Function for min and max */

Fixed & Fixed::min(Fixed &arg1, Fixed &arg2){
	if (arg1.getRawBits() < arg2.getRawBits())
		return (arg1);
	return (arg2);
}

Fixed const &Fixed::min(Fixed const &arg1, Fixed const &arg2){
	if (arg1.getRawBits() < arg2.getRawBits())
		return (arg1);
	return (arg2);
}

Fixed & Fixed::max(Fixed &arg1, Fixed &arg2){
	if (arg1.getRawBits() > arg2.getRawBits())
		return (arg1);
	return (arg2);
}

Fixed const &Fixed::max(Fixed const &arg1, Fixed const &arg2){
	if (arg1.getRawBits() > arg2.getRawBits())
		return (arg1);
	return (arg2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}