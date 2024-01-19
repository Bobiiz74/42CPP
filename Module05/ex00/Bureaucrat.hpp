/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:05:35 by robin             #+#    #+#             */
/*   Updated: 2024/01/19 10:39:29 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Bureaucrat {
    
    private:
            Bureaucrat(void);
            const   std::string _name;
            int     _grade;

    public:
            Bureaucrat(std::string name, int grade);
            Bureaucrat(const Bureaucrat& src);
            ~Bureaucrat();
            Bureaucrat &operator=(const Bureaucrat& rhs);
            
            void    promote(void);
            void    demote(void);
            
            int getGrade(void) const;
            std::string getName(void) const;
            
            class GradeTooHighException: public std::exception
            {
                public:
                    const char *what() const throw(){
                        return ("Grade Too High !");
                    }
            };
            class GradeTooLowException: public std::exception
            {
                public:
                    const char *what() const throw(){
                        return ("Grade Too Low !");
                    }
            };
};

std::ostream &operator<<(std::ostream &ostr, const Bureaucrat& rhs);

#endif