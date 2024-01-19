/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:16 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 15:54:40 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
    // std::cout << "---------------------" << std::endl;
	// try {
	// Bureaucrat b("Bureaucrat", -1);
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------" << std::endl;
	// try {
	// Bureaucrat b("Bureaucrat", 151);
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------" << std::endl;
	// try {
	//     Bureaucrat b("Bureaucrat", 1);
	// 	b.promote();
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------" << std::endl;
	// try {
	//     Bureaucrat c("Bureaucrat", 150);
	// 	c.demote();
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------" << std::endl;
	// try {
	//     Bureaucrat d("Bureaucrat", 50);
    //     std::cout << d << std::endl;
	// 	d.demote();
    //     std::cout << d << std::endl;
    //     d.promote();
    //     std::cout << d << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---------------------" << std::endl;
	std::cout << "----------FORM----------" << std::endl;
	try {
		Form f("Paperasse", -1, -2);
		//std::cout << f << std::endl;	
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
		std::cout << "----------FORM----------" << std::endl;
	Bureaucrat g("Jim", 140);
	Form f("Paperasse", 100, 50);	
	g.signForm(f);
	try {
		std::cout << "----------FORM----------" << std::endl;
	Bureaucrat g("Jim", 40);
	Form f("Paperasse", 100, 50);	
	g.signForm(f);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
		std::cout << "----------FORM----------" << std::endl;	
	return (0);
}