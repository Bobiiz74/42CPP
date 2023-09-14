/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:56:14 by robin             #+#    #+#             */
/*   Updated: 2023/09/14 13:39:12 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl  {

        private :
                void debug( void );
                void info( void );
                void warning( void );
                void error( void );

        public :
                Harl(void);
                ~Harl(void);
                void complain( std::string level );
                void (*functionPtr[4])();

        
};

#endif