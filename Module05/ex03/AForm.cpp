/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:12:11 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 15:25:11 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm (void) : _name("default"), _gradeToSign(1), _gradeToExecute(1){
    std::cout << "Constructor AForm called" << std::endl;
    return;
}

AForm::~AForm (){
    std::cout << "Destructor AForm called" << std::endl;
    return; 
}

AForm::AForm(const AForm& src) : _name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute), _signed(src._signed){

}

AForm::AForm (const std::string name, const int gts, const int gte)   : _name(name), _gradeToSign(gts), _gradeToExecute(gte) {
    std::cout << "Constructor AForm called" << std::endl;
    if(gts < 1 || gte < 1)
        throw AForm::GradeTooHighException();
    if(gts > 150 || gte > 150)
        throw AForm::GradeTooLowException();
    else
        this->_signed = false;
}
AForm & AForm::operator=(const AForm& rhs){
    (void)rhs;
	return *this;
}

std::string AForm::getName(void) const {
    return(this->_name);
}

int AForm::getGradeToSign(void) const{
    return(this->_gradeToSign);
}

int AForm::getGradeToExecute(void) const{
    return(this->_gradeToExecute);
}

bool AForm::getSigned(void) const {
    return(this->_signed);
}

void    AForm::beSigned(Bureaucrat const& a) {
    if(a.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

// void AForm::execute(Bureaucrat const & executor) const{
//     if(executor.getGrade() > this->_gradeToExecute)
//     {
//         throw AForm::GradeTooLowException();
//     }
// }

std::ostream &operator<<(std::ostream &ostr, const AForm &b)
{
	ostr << b.getName() << ", AForm grade to sign " << b.getGradeToSign() << " and grade to exec " << b.getGradeToExecute();
	return (ostr);
}