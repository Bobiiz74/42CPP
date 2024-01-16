/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:34:21 by robin             #+#    #+#             */
/*   Updated: 2024/01/16 11:29:10 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    
	const AAnimal *meta = new AAnimal();
	meta->makeSound();
	delete meta;
	
	const AAnimal *i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	delete i;
	const AAnimal *j = new Dog();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); 
	delete j;
	return (0);
}