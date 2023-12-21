/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:34:21 by robin             #+#    #+#             */
/*   Updated: 2023/10/11 17:37:58 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta[10];

    for(int i = 0; i < 5; i++){
        meta[i] = new Cat();
        std::cout << "-----" << std::endl;
    }
    for(int i = 5; i < 10; i++){
        meta[i] = new Dog();
        std::cout << "-----" << std::endl;
    }
    for (int i = 0; i < 10; i++){
		std::cout << "Animal " << i << " : ";
		meta[i]->makeSound();
	}
	for (int i = 0; i < 10; i++){
		delete meta[i];
		std::cout << "-----" << std::endl;
	}

    return 0;
}