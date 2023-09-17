/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:26:31 by robin             #+#    #+#             */
/*   Updated: 2023/09/14 16:17:35 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
            int _rawBits;
            static const int _fraction = 8;
    public:
            Fixed();
            ~Fixed();
            Fixed(Fixed const & src);
            Fixed &operator=(Fixed const &rhs);
            int getRawBits( void ) const;
            void setRawBits( int const raw );
};


#endif