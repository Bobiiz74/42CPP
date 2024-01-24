/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:16 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 17:16:20 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    Intern	someRandomIntern;
	AForm *rrf;
	Bureaucrat	boss("boss", 1);
	std::cout << "-------------------------" << std::endl;
	try 
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
	}
	catch (std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Target");
	}
	catch (std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("presidential pardon", "Target");
	}
	catch (std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	try
	{
		rrf = someRandomIntern.makeForm("presidl pardon", "Target");
	}
	catch (std::exception & e) 
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}