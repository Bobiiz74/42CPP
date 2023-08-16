/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:21:29 by robin             #+#    #+#             */
/*   Updated: 2023/08/16 16:05:36 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class   PhoneBook   {
            private:
                    unsigned int    _numb_of_contact;
                    Contact         _book[8];
                    void            _add_contact_to_line(int index);
                    int             _get_number_of_contact(void) const;
            public:
                    PhoneBook( void );
                    ~PhoneBook( void );
                    void    add_contact(void);
                    void    search_contact(void);
};

#endif