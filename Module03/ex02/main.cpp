/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:34:27 by robin             #+#    #+#             */
/*   Updated: 2023/12/13 14:34:16 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << "3: "; d.takeDamage(5); // peut prendre des dgts
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

	std::cout << "-----------------------------------------" << std::endl;	

	FragTrap	g("BillFrag");
	FragTrap	h(g);
	FragTrap	i("BobFrag");
	h = i;
	std::cout << "1: "; g.attack("Bobfrag");
	std::cout << "2: "; g.highFivesGuys();
	std::cout << "3: "; g.beRepaired(1); //si on peut pas etre reparer
	std::cout << "4: "; g.takeDamage(6); // si on peut prendre des degats
	std::cout << "5: "; g.beRepaired(100); // si on peut etre reparer
	std::cout << "6: "; g.takeDamage(20); // 
	std::cout << "7: "; g.takeDamage(100); // si on ne peut pas prendre 100 degat mais 80
	std::cout << "8: "; g.beRepaired(3); // si on ne peut plus etre repare (deja mort)
	std::cout << "9: "; g.attack("truc"); // si on ne peut plus attacker (deja mort)
	std::cout << "10: "; g.highFivesGuys(); // si on ne peut plus high five (deja mort)
	std::cout << "---- Energy check ----" << std::endl;
	for (int i = 0; i < 101; i++)
	{
		std::cout << i + 1 << ": "; h.attack("someone");
	}
	h.beRepaired(42);
	h.highFivesGuys();
	std::cout << std::endl << std::endl << "---- Destruction ----" << std::endl;
	return 0;
}