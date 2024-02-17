/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:41:26 by robin             #+#    #+#             */
/*   Updated: 2024/02/17 12:35:53 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {};

ScalarConverter::~ScalarConverter(void) {};

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
	return ;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

void    ScalarConverter::convert(std::string str){
    // if (str.empty())
	// 	ScalarConverter::print(str[0]);
    if(ScalarConverter::isNan(str))
        ScalarConverter::printNan(str);
    else if(ScalarConverter::isChar(str))
        ScalarConverter::print(str[0]);
    else if(ScalarConverter::isInt(str))
        ScalarConverter::print(std::atoi(str.c_str()));
    else if(ScalarConverter::isFloat(str))
        ScalarConverter::printFloat(std::atof(str.c_str()));
    else if(ScalarConverter::isDouble(str))
        ScalarConverter::printDouble(std::strtod(str.c_str(), NULL));
    else 
        std::cout << "Invalid arguments" << std::endl;
}

bool	ScalarConverter::isChar(std::string input){
    if (input.length() != 1 || std::isdigit(input[0]) || !std::isprint(input[0]))
		return (false);
	return (true);
}

bool	ScalarConverter::isInt(std::string input){
    int	i = 0;
	while (std::isspace(input[i]))
		i++;
	if (input[i] == '+' || input[i] == '-')
		i++;
	if (input[i] == '\0' || !std::isdigit(input[i]))
		return (false);
	for (size_t j = i; j < input.length(); j++)
	{
		if (std::isdigit(input[j]))
			continue ;
		else
			return (false);
    }
    char* endptr;
    long	str = strtol(input.c_str(), &endptr, 10);
	if (*endptr != '\0' || str > INT_MAX || str < INT_MIN)
		return (false);
	return (true);
}

bool	ScalarConverter::isFloat(std::string input){
    size_t	i = 0;

	while (std::isspace(input[i]))
		i++;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != '.' || input[i + 1] == '\0')
		return (false);
	i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != 'f' && input[i] != 'F')
		return false;
	else if (input[i + 1] != '\0')
		return false;
	return true;
}

bool	ScalarConverter::isDouble(std::string input){
    size_t	i = 0;

	while (std::isspace(input[i]))
		i++;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != '.' || input[i + 1] == '\0')
		return (false);
	i++;
	while (std::isdigit(input[i]))
		i++;
	if (input[i] != '\0')
		return false;
	return true;
    
}
bool ScalarConverter::isNan(std::string input)
{
    if(input == "nan" || input == "nanf" || input == "-inff" || input == "-inf" || input == "+inff" || input == "+inf")
        return true;
    return false;
}

void	ScalarConverter::print(char c){
    if (std::isprint(c))
		std::cout << "char	: '" << c << "'" << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
	std::cout << "int	: " << static_cast<int>(c) << std::endl;
	std::cout << "float	: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double	: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::print(int i){
    char	c = static_cast<char>(i);
	if (std::isprint(c))
		std::cout << "char	: '" << c << "'" << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
	std::cout << "int	: " << i << std::endl;
	std::cout << "float	: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double	: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ScalarConverter::printFloat(float f){
    char	c = static_cast<char>(f);
	if (std::isprint(c))
		std::cout << "char	: '" << c << "'" << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
    float fl = static_cast<float>(f);
	std::cout << "int	: " << static_cast<int>(f) << std::endl;
	std::cout << "float	: " << std::setprecision(1) << std::fixed << fl << "f" << std::endl;
    //std::cout << std::setprecision(-1);
	std::cout << "double	: "  << static_cast<double>(f) << std::endl;
}
void	ScalarConverter::printDouble(double d){
    char	c = static_cast<char>(d);
	if (std::isprint(c))
		std::cout << "char	: '" << c << "'" << std::endl;
	else
		std::cout << "char	: Non displayable" << std::endl;
	std::cout << "int	: " << static_cast<int>(d) << std::endl;
	std::cout << "float	: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double	: " << d << std::endl;
}
void ScalarConverter::printNan(std::string str)
{
    std::cout << "char      : impossible" << std::endl;
    std::cout << "int       : impossible" << std::endl;
    if(str == "nan" || str == "nanf")
    {
        std::cout << "float     : nanf" << std::endl;
        std::cout << "double    : nan" << std::endl;
    }
    else if(str == "-inf" || str == "+inf")
    {
        std::cout << "float     : " << str << "f" << std::endl;
        std::cout << "double    : " << str << std::endl;
    }
    else if(str == "-inff" || str == "+inff")
    {
        std::cout << "float     : " << str << std::endl;
        std::cout << "double    : " << str.substr(0, str.length() - 1) << std::endl;
    }
}