/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:41:51 by robin             #+#    #+#             */
/*   Updated: 2024/02/17 12:27:53 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cfloat>
#include <iomanip>

class Serializer {
    
    private:
            Serializer(void);

    public:
            Serializer(const Serializer& src);
            ~Serializer();
            Serializer &operator=(const Serializer& rhs);


};

std::ostream &operator<<(std::ostream &ostr, const Serializer& rhs);

#endif