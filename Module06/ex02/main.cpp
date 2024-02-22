/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:12:19 by robin             #+#    #+#             */
/*   Updated: 2024/02/22 12:16:44 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void){
	srand((unsigned)time(0)); 
    int i;
    i = (rand()%3)+1; 

	switch (i)
	{
	case 1:
		std::cout << "A created" << std::endl;
		return (new A());
	case 2:
		std::cout << "B created" << std::endl;
		return (new B());
	case 3:
		std::cout << "C created" << std::endl;
		return (new C());
	}
	return NULL;
}

void identify(Base* p){
	A * a = dynamic_cast<A *>(p);
	if(a != NULL){
		std::cout << "Type is A		*" << std::endl;
		return ;
	}
	B * b = dynamic_cast<B *>(p);
	if(b != NULL){
		std::cout << "Type is B		*" << std::endl;
		return ;
	}
	C * c = dynamic_cast<C *>(p);
	if(c != NULL){
		std::cout << "Type is C		*" << std::endl;
		return ;
	}
}

void identify(Base& p){
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "Type is A		&" << std::endl;
		(void) a;
	}
	catch(std::exception& bc)	{}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "Type is B		&" << std::endl;
		(void) b;
	}
	catch(std::exception& bc)	{}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "Type is C		&" << std::endl;
		(void) c;
	}
	catch(std::exception& bc)	{}
	
	
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);

	B bInstance;

    try {
        A& aInstance = dynamic_cast<A&>(bInstance);
        std::cout << "Casting successful" << std::endl;
		(void) aInstance;
    } catch(std::exception& e) {
        std::cout << "Casting failed: " << e.what() << std::endl;
    }
	
    delete base;
    return(0);
}
