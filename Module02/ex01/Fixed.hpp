/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:26:31 by robin             #+#    #+#             */
/*   Updated: 2023/09/17 11:58:47 by robin            ###   ########.fr       */
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
            Fixed(int const n);
            Fixed(float const f);
            ~Fixed();
            Fixed(Fixed const & src);
            Fixed &operator=(Fixed const &rhs);
            int getRawBits( void ) const;
            void setRawBits( int const raw );
            float toFloat( void ) const;
            int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif