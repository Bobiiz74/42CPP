/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:34:21 by robin             #+#    #+#             */
/*   Updated: 2023/12/17 15:29:24 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); 
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    meta->makeSound();
    delete meta;
	delete j;
	delete i;
    std::cout << "------------------------------------------" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << wrong->getType() << " " << std::endl;
	wrong->makeSound(); 
	std::cout << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	delete wrong;
	delete wrong_cat;

    return 0;
}