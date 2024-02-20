/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:12:19 by robin             #+#    #+#             */
/*   Updated: 2024/02/17 15:01:37 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data t_data = {42};
	std::cout << t_data.value << " is the data value\n";
	std::cout << &t_data.value << " is the data address\n";
	
	Data *ptr_data = &t_data;

	uintptr_t serial_data = Serializer::serialize(ptr_data);
	std::cout << serial_data << " is the serial_data\n";

	Data *ptr_new_data = Serializer::deserialize(serial_data);
	std::cout << ptr_new_data->value << " is the new data value\n";
	std::cout << &ptr_new_data->value << " is the new data address\n";
    
    return(0);
}
