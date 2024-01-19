/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:16 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 10:53:33 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    std::cout << "---------------------" << std::endl;
	try {
	Bureaucrat b("Bureaucrat", -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	try {
	Bureaucrat b("Bureaucrat", 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b("Bureaucrat", 1);
	try {
		b.promote();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat b2("Bureaucrat", 150);
	try {
		b2.demote();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	Bureaucrat ("bob", 1);
	std::cout << c << std::endl;
	c.demote();
	std::cout << c << std::endl;
	for(int i = 0; i < 5; i++)
	{
			c.demote();
			std::cout << c << std::endl;
	}
	return (0);
}