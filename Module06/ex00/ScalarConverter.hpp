/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:41:51 by robin             #+#    #+#             */
/*   Updated: 2024/02/14 16:45:50 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <cstdlib>

class ScalarConverter {
    
    private:
            ScalarConverter(void);

    public:
            ScalarConverter(const ScalarConverter& src);
            ~ScalarConverter();
            ScalarConverter &operator=(const ScalarConverter& rhs);
            
            static void    convert(std::string str);

            static bool	isChar(std::string input);
		    static bool	isInt(std::string input);
		    static bool	isFloat(std::string input);
		    static bool	isDouble(std::string input);
            static bool isMinMax(std::string input);

            static void	print(char c);
		    static void	print(int i);
		    static void	print(float f);
		   // static void	print(double d);
            //static void print(?);

};

std::ostream &operator<<(std::ostream &ostr, const ScalarConverter& rhs);

#endif