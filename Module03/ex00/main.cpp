/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:34:27 by robin             #+#    #+#             */
/*   Updated: 2023/09/17 15:48:28 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
    ClapTrap	a("Bill");
	ClapTrap	b(a);
	ClapTrap	c("Bob");
	c = a;
	
	std::cout << "1: "; a.attack("Bob");
	std::cout << "2: "; a.beRepaired(1); //ne peut pas etre réparé
	std::cout << "3: "; a.takeDamage(6); // peut prendre des dgts
	std::cout << "4: "; a.beRepaired(100); // peut etre réparé
	std::cout << "5: "; a.takeDamage(20); // bill meurt
	std::cout << "6: "; a.takeDamage(100); // bill deja (mort)
	std::cout << "7: "; a.beRepaired(3); // ne peut plus etre repare (mort)
	std::cout << "8: "; a.attack("bob"); // ne peut plus attacker (mort)
	std::cout << std::endl << "---- Energy check ----" << std::endl;

	for (int i = 0; i < 11; i++)
	{
		std::cout << i + 1 << ": "; b.attack("someone");
	}
	b.beRepaired(42);
	return 0;
}