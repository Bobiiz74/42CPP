/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:34:27 by robin             #+#    #+#             */
/*   Updated: 2023/09/18 15:28:31 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	
std::cout << "-----------------------------------------" << std::endl;

	ScavTrap	d("BillScav");
	ScavTrap	e(d);
	ScavTrap	f("BobScav");
	f = d;

	std::cout << "0: "; d.attack("BobScav");
	std::cout << "1: "; d.guardGate();
	std::cout << "2: "; d.beRepaired(1); //ne peut pas etre réparé
	std::cout << "3: "; d.takeDamage(6); // peut prendre des dgts
	std::cout << "4: "; d.beRepaired(100); // peut etre réparé
	std::cout << "5: "; d.takeDamage(100); // bill meurt
	std::cout << "6: "; d.takeDamage(100); // bill deja (mort)
	std::cout << "7: "; d.beRepaired(3); // ne peut plus etre repare (mort)
	std::cout << "8: "; d.attack("BobScav"); // ne peut plus attacker (mort)
	std::cout << "10: "; d.guardGate();
	std::cout << "---- Energy check ----" << std::endl;
	for (int i = 0; i < 51; i++)
	{
		std::cout << i + 1 << ": "; e.attack("someone");
	}
	e.beRepaired(42);
	e.guardGate();

	std::cout << std::endl << std::endl << "---- Destruction ----" << std::endl;
	return 0;
}