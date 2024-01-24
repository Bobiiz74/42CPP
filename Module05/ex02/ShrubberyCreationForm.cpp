/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:36:39 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 14:34:54 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm (void){
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm (){
    std::cout << "Destructor ShrubberyCreationForm called" << std::endl;
    return; 
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& src) {
    (void)src;
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string target)   : AForm("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;

        
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs){
    AForm::operator=(rhs);
	return *this;
}

std::string ShrubberyCreationForm::getTarget(void) const{
    return(this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(!this->getSigned())
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::string filename(this->getTarget() + "_shruberry");
	std::ofstream file;
	file.open(filename.c_str(), std::ios::out);
	if(!file.is_open())
	{
		std::cout << "Couldn't open file" << std::endl;
		return ;
	}
	file << "       _-_\n";
	file << "    /~~   ~~\\\n" ;
	file << " /~~         ~~\\\n";
	file << "{               }\n";
	file << " \\  _-     -_  /\n";
	file << "   ~  \\\\ //  ~\n";
	file << "_- -   | | _- _\n";
	file << "  _ -  | |   -_\n";
	file << "      // \\\\\n";
	file << "Look at this binary three\n";
	file << std::endl;
	file.close();
}
