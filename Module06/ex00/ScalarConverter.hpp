/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:41:51 by robin             #+#    #+#             */
/*   Updated: 2024/01/27 16:42:49 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>

class ScalarConverter {
    
    private:
            ScalarConverter(void);

    public:
            ScalarConverter(std::string name, int grade);
            ScalarConverter(const ScalarConverter& src);
            ~ScalarConverter();
            ScalarConverter &operator=(const ScalarConverter& rhs);

};

std::ostream &operator<<(std::ostream &ostr, const ScalarConverter& rhs);

#endif