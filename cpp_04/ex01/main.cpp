/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:03:27 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 19:47:12 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


#include <iostream>

int main()
{
/*const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete i;
delete j;
std::cout << "*****************************" <<std::endl;
const WrongAnimal* metawrong = new WrongAnimal();
const WrongAnimal* iwrong = new WrongCat();
 iwrong->makeSound(); //will output the cat sound!
 metawrong->makeSound();
 delete metawrong;
 delete iwrong;*/
 int	nbr = 4;
	Animal *animals[nbr];
	std::cout << "------create dogs and cats-------\n" <<  std::endl;
	for (int i = 0; i < nbr; i++) {
		std::cout << i << std::endl;
		if (i < (nbr / 2)) {
			animals[i] = new Dog();
		} 
        else {
			animals[i] = new Cat();
		}
	}
	std::cout << std::endl;
	std::cout << "-------Dogs and cats making sound.-------\n" <<  std::endl;
	for (int i = 0; i < nbr; i++) {
		std::cout << "Animal type: " << \
			animals[i]->getType() << " " << std::endl;
		animals[i]->makeSound();
	}
	std::cout << std::endl;
	std::cout << "-------Delete dogs and cats.-------\n";
	for (int i = 0; i < nbr; i++) {
		delete animals[i];
	}
	std::cout << std::endl;
Cat kitty;
std::cout << std::endl;

kitty.addIdea("kitty idea 1");
kitty.addIdea("kitty idea 2");
std::cout << std::endl;

Cat cutee(kitty);
cutee.addIdea("cutee idea 1");
std::cout << "************print kitty ideas list *********************" <<std::endl;
kitty.printIdea();
std::cout << "************print cutee ideas list *********************"<<std::endl;
cutee.printIdea();
std::cout << std::endl;
std::cout <<"*******************" <<std::endl;
Dog doggy;
std::cout << std::endl;

doggy.addIdea("Dog idea 1");
doggy.addIdea("Dog idea 2");
std::cout << std::endl;

Dog dd(doggy);
dd.addIdea("dd idea 1");
std::cout << "************print doggy ideas list *********************"<<std::endl;
doggy.printIdea();
std::cout << "************print dd ideas list *********************"<<std::endl;
dd.printIdea();
std::cout << std::endl;
return 0;
}