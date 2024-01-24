/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:02:37 by robin             #+#    #+#             */
/*   Updated: 2024/01/24 17:13:22 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern (void){
    std::cout << "Constructor Intern called" << std::endl;
    this->_formName[0] = "shrubbery creation";
    this->_formName[1] = "robotomy request";
    this->_formName[2] = "presidential pardon";
    return;
}

Intern::~Intern (){
    std::cout << "Destructor Intern called" << std::endl;
    return; 
}

Intern::Intern (const Intern& src) {
    (void) src;
}

Intern & Intern::operator=(const Intern& rhs) {
	if (this != &rhs)
        *this = rhs;
    return(*this);
}

AForm*    Intern::makeForm(std::string const form, std::string const target) {
        int j = 3;
        AForm *foundedForm;
        
        for(int i = 0; i < 3; i++)
        {
            if(this->_formName[i] == form)
                j = i;
        }
        switch(j)
        {
            case 0:
                    foundedForm = new ShrubberyCreationForm(target);
                    std::cout << "Intern creates " << foundedForm->getName() << std::endl;
                    break ;
            case 1:
                    foundedForm = new RobotomyRequestForm(target);
                    std::cout << "Intern creates " << foundedForm->getName() << std::endl;
                    break;
            case 2: 
                    foundedForm = new PresidentialPardonForm(target);
                    std::cout << "Intern creates " << foundedForm->getName() << std::endl;
                    break;
            default:
                    throw Intern::NoFormFound();
        }
        return(foundedForm);
}
