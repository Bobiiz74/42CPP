/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 16:00:17 by robin             #+#    #+#             */
/*   Updated: 2023/08/16 16:34:36 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "PhoneBook created" << std::endl;
	this->_numb_of_contact = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "PhoneBook destroyed" << std::endl;
	return ;
}

void	PhoneBook::_add_contact_to_line(int index){
	this->_book[index].get_param();
	if (this->_numb_of_contact < 8)
		this->_numb_of_contact++;
	return ;
}

int		PhoneBook::_get_number_of_contact(void) const{
	return (this->_numb_of_contact);
}

void PhoneBook::add_contact(void) {
	int tmp;

	tmp = this->_get_number_of_contact();
	if (tmp == 8)
		tmp--;
	if (tmp != 0)
	{

		for (int i = tmp; i > 0; i--) {
			this->_book[i].copy(this->_book[i - 1]);
		}
	}
	this->_add_contact_to_line(0);
	return ;
}

void    PhoneBook::search_contact(void)
{
    if (this->_numb_of_contact == 0)
    {
        std::cout << "There is no contact yet." << std::endl;
        return ;
    }
    else
    {
        for(unsigned int i = 0; i < this->_numb_of_contact; i++)
        {
            this->_book[i].print_line_contact(i);
        }
        std::string index("");
		while (index.length() != 1 || index[0] < '1' || index[0] > '8') 
        {
			std::cout << "Type the index of the contact you want : ";
			std::getline(std::cin, index);
			if (std::cin.fail())
				exit(1);
		}
		if ((unsigned)(index[0] - '1') < this->_numb_of_contact)
			this->_book[index[0] - '1'].print_contact();
    }
}
