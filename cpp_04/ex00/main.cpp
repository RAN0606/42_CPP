/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:03:27 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:48:04 by rliu             ###   ########.fr       */
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
const Animal* meta = new Animal();
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
 delete iwrong;
return 0;
}