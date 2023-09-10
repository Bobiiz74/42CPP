/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:25:48 by robin             #+#    #+#             */
/*   Updated: 2023/09/10 12:06:16 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>

class   Zombie   {
            private:   
                    std::string     _name;
                    
            public:
                    Zombie(void);
                    ~Zombie(void);
                    void announce( void );
                    void setName(std::string name);
                    
};

Zombie* zombieHorde( int N, std::string name );

#endif
