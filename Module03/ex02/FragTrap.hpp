/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:13:21 by robin             #+#    #+#             */
/*   Updated: 2023/10/03 18:00:23 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    
    private :
            FragTrap(void);

    protected :

    public :
            FragTrap(std::string name);
            FragTrap(FragTrap const & src);
            ~FragTrap(void);
            FragTrap& operator=(FragTrap const & rhs);
            void attack(const std::string& target);
            void highFivesGuys(void);
    
};

#endif