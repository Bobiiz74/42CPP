/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:39:54 by robin             #+#    #+#             */
/*   Updated: 2023/09/17 16:23:06 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)  {
    std::cout << "Constructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10),
_attackDmg(0) {
	std::cout << "Creation of ClapTrap: " << this->_name << std::endl;
	return ; 
}

ClapTrap::ClapTrap(const ClapTrap& src)    {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap( void )  {
    std::cout << "Destructor called" << std::endl;
    return;
}

ClapTrap & ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout << "Assignement constructor called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDmg = rhs._attackDmg;
    return (*this);
}

void ClapTrap::attack(const std::string& target)    {
    if(this->_hitPoint > 0 && this->_energyPoint > 0)
    {
        std::cout << "Claptrap " << this->_name;
        std::cout << " attacks " << target;
        std::cout << " dealing " << this->_attackDmg;
        std::cout << " points of damage." << std::endl;
        this->_energyPoint--;
    }
    else
        std::cout << this->_name << " can't attack" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)  {
    if (this->_hitPoint == 0) {
		std::cout << this->_name << " is dead." << std::endl;
		return ;
	}
	if (amount >= this->_hitPoint) {
		std::cout << this->_name << " took " << this->_hitPoint;
		this->_hitPoint = 0;
		std::cout << " damages and die." << std::endl;
	}
	else {
		std::cout << this->_name << " took " << amount;
		std::cout << " damages." << std::endl;
		this->_hitPoint -= amount;
	}
	return ;
}
void ClapTrap::beRepaired(unsigned int amount)  {
   if(this->_hitPoint > 0 && this->_energyPoint > 0 && this->_hitPoint < 10)
    {
        if(amount > (this->_hitPoint + 10))
        {
            std::cout << "Claptrap " << this->_name;
		    std::cout << " repairs " << (10 - _hitPoint) << " hp." << std::endl;
            this->_hitPoint += (10 - _hitPoint);
        }
        else
        {
            std::cout << "Claptrap " << this->_name;
		    std::cout << " repairs " << amount << " hp." << std::endl;
            this->_hitPoint += amount;
        }
    }
    else
        std::cout << this->_name << " can't be repared" << std::endl; 
}

std::string	ClapTrap::get_name(void) const    {
    return (this->_name);
}

int ClapTrap::get_HP(void) const    {
    return (this->_hitPoint);
}

int ClapTrap::get_energy(void) const    {
    return (this->_energyPoint);
}