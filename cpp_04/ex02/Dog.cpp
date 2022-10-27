/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:58 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 14:03:37 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : AAnimal(){
    std::cout << "Dog default constructor callded !" << std::endl;
    this->_type = "Dog";
    this->dogBrain = new Brain();
}

Dog::Dog(const Dog &toCopie): AAnimal(){
     std::cout << "Dog copy constructor callded !" << std::endl;
     this->dogBrain = new Brain();
     *this = toCopie;
}

Dog::~Dog(void){
    std::cout << "Dog destructor callded !" << std::endl;
    delete this->dogBrain;
}

Dog &Dog::operator=(const Dog &toAssigne){
    std::cout << "Dog assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    *(this->dogBrain) =*(toAssigne.dogBrain);
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << this->_type << " wow wow! " << std::endl;
}

void Dog::addIdea(std::string idea){
    this->dogBrain->addIdea(idea);
}

void Dog::printIdea(void){
    this->dogBrain->printIdea();
}
/*std::string Dog::getType(void) const{
    return(this->_type);
}*/