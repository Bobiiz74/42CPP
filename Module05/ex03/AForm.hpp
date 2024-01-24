/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:06:07 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 15:25:28 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat;

class AForm {
    
    private:
            const   std::string _name;
            const int   _gradeToSign;
            const int   _gradeToExecute; 
            bool        _signed;

    public:
            AForm(void);
            AForm(const std::string name, const int gts, const int gte);
            AForm(const AForm& src);
            virtual ~AForm();
            AForm &operator=(const AForm& rhs);
            
            int getGradeToSign(void) const;
            int getGradeToExecute(void) const;
            std::string getName(void) const;
            bool getSigned(void) const;
            void    beSigned(Bureaucrat const& a);

            virtual void execute(Bureaucrat const & executor) const = 0;
            
            class GradeTooHighException: public std::exception
            {
                public:
                    virtual const char *what() const throw(){
                        return ("Grade Too High !");
                    }
            };
            class GradeTooLowException: public std::exception
            {
                public:
                    virtual const char *what() const throw(){
                        return ("Grade Too Low !");
                    }
            };
            class FormNotSignedException: public std::exception
            {
                public:
                    virtual const char *what() const throw(){
                        return ("Form not signed !");
                    }
            };
};

std::ostream &operator<<(std::ostream &ostr, const AForm& rhs);

#endif