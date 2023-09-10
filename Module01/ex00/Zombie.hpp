/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:51:02 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 10:33:01 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>

class   Zombie   {
            private:   
                    std::string     _name;
                    
            public:
                    Zombie(std::string name);
                    ~Zombie(void);
                    void announce( void );
                    
};

Zombie* newZombie( std::string name );
void	randomChump(std::string name);

#endif