/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:19 by robin             #+#    #+#             */
/*   Updated: 2023/10/03 17:47:37 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)    {
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)  {
    std::cout << "FragTrap constructor called" << std::endl;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDmg = 30;
    _maxHp = 100;
    return;
}

FragTrap::~FragTrap(void)   {
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src)    {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs) {
    std::cout << "FragTrap assignement constructor called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attackDmg = rhs._attackDmg;
    this->_maxHp = rhs._maxHp;
    return (*this);
}

void FragTrap::attack(const std::string& target)    {
    if(this->_hitPoint > 0 && this->_energyPoint > 0)
    {
        std::cout << "FragTrap " << this->_name;
        std::cout << " attacks " << target;
        std::cout << " dealing " << this->_attackDmg;
        std::cout << " points of damage." << std::endl;
        this->_energyPoint--;
    }
    else
        std::cout << this->_name << " can't attack" << std::endl;
}

void    FragTrap::highFivesGuys(void)   {
    if(this->_energyPoint < 1)
        std::cout << "FragTrap " << _name << " can't high five because he doesn't have enough energy" << std::endl;
	else if (this->_hitPoint < 1)
		std::cout << "FragTrap " << _name << " can't high five because he is dead" << std::endl;
	else
	{
		std::cout << "FragTrap " << _name << " want to make a High Five" << std::endl;
		_energyPoint--;
    }
}