/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:47:55 by robin             #+#    #+#             */
/*   Updated: 2023/10/03 16:26:13 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
    private :
            ScavTrap(void);

    protected :

    public :
            ScavTrap(std::string name);
            ScavTrap(ScavTrap const & src);
            ~ScavTrap(void);
            ScavTrap& operator=(ScavTrap const & rhs);
            void attack(const std::string& target);
            //void beRepaired(unsigned int amount);
            void guardGate();
    
};

#endif