/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:53 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 10:45:12 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void){
    std::cout << "Constructor Bureaucrat called" << std::endl;
    return;
}

Bureaucrat::~Bureaucrat (){
    std::cout << "Destructor Bureaucrat called" << std::endl;
    return; 
}

Bureaucrat::Bureaucrat (const std::string name, int grade)   : _name(name){
    std::cout << "Constructor Bureaucrat called" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
        
}
Bureaucrat & Bureaucrat::operator=(const Bureaucrat& rhs){
    (void)rhs;
	std::cout << "Can't copy a Bureaucrat per assignement" << std::endl;
	return *this;
}

void Bureaucrat::promote(void){
    if(this->_grade -1 < 1)
        throw Bureaucrat::GradeTooHighException();
    (this->_grade)--;
}

void Bureaucrat::demote(void){
    if(this->_grade +1 > 150)
        throw Bureaucrat::GradeTooLowException();
    (this->_grade)++; 
}

std::string Bureaucrat::getName(void) const {
    return(this->_name);
}

int Bureaucrat::getGrade(void) const{
    return(this->_grade);
}

std::ostream &operator<<(std::ostream &ostr, const Bureaucrat &b)
{
	ostr << b.getName() << ", Bureaucrat grade " << b.getGrade();
	return (ostr);
}