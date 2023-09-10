/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:30:00 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 15:25:43 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB    {
        private:
                std::string _name;
                Weapon      *_weapon;

        public:
                HumanB(std::string const & init);
                ~HumanB(void);
                void    attack(void);
                void    setWeapon(Weapon &weapon);
};

#endif