/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:16 by robin             #+#    #+#             */
/*   Updated: 2024/02/22 11:34:26 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    Bureaucrat b1("Bureaucrat b1", 71);
	AForm *f1 = new ShrubberyCreationForm ("target");
	AForm *f2 = new RobotomyRequestForm ("ROBOT");
	AForm *f3 = new PresidentialPardonForm ("President");
	std::cout << "-------------------------" << std::endl;
	b1.executeForm(*f1);
	b1.signForm(*f1);
	b1.executeForm(*f1);
	delete f1;
	std::cout << "-------------------------" << std::endl;
	b1.executeForm(*f2);
	b1.signForm(*f2);
	b1.executeForm(*f2);
	delete f2;
	std::cout << "-------------------------" << std::endl;
	b1.executeForm(*f3);
	b1.signForm(*f3);
	b1.executeForm(*f3);
	delete f3;
	return (0);
}