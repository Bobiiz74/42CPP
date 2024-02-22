/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:18:47 by rgodtsch          #+#    #+#             */
/*   Updated: 2024/02/22 12:23:19 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) 
{
	/*{
		int *a = new int();
		std::cout << *a << std::endl;
		delete a;
	}*/
	Array<int> a;
	std::cout << "-------------\n";
	std::cout << a.size() << std::endl;
	std::cout << "-------------\n";
	Array<int> b(5);
	for (int i = 0; i < 5; i++) {
		b[i] = i; 
		std::cout << b[i] << std::endl;
	}
	std::cout << "-------\n size: ";
	std::cout << static_cast<int>(b.size());
	std::cout << "\n-------\n";
	try {
		b[7] = 6;
	} catch (const std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}
