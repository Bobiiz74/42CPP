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

struct Data {
	uintptr_t value;
};

class Serializer {
    
    private:
                Serializer(void);
                Serializer(const Serializer& src);
                ~Serializer();
                Serializer &operator=(const Serializer& rhs);

    public:
                static uintptr_t serialize(Data* ptr);
                static Data* deserialize(uintptr_t raw);

};

#endif
