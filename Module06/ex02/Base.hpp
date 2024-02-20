/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:41:51 by robin             #+#    #+#             */
/*   Updated: 2024/02/17 12:27:53 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Base_HPP
# define Base_HPP

#include <iostream>
#include <string>
#include <ctime>

class Base {
    public:
            virtual ~Base() {};
};

class   A : public Base{
};

class   B : public Base{
};

class   C : public Base{
};

#endif
