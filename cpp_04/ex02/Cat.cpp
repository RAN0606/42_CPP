/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:06 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 14:00:35 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>
Cat::Cat(void) : AAnimal(){
    std::cout << "Cat default constructor callded !" << std::endl;
    this->_type = "Cat";
    this->catBrain = new Brain();
}

Cat::Cat(const Cat &toCopie): AAnimal(){
     std::cout << "Cat copy constructor callded !" << std::endl;
     this->catBrain = new Brain();
     *this = toCopie;
}

Cat::~Cat(void){
    std::cout << "Cat destructor callded !" << std::endl;
    delete this->catBrain;
}

Cat &Cat::operator=(const Cat &toAssigne){
    std::cout << "Cat assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    *(this->catBrain) = *(toAssigne.catBrain);
    return (*this);
}
void Cat::makeSound(void) const{
    std::cout << this->_type << " miaowwwwwww! " << std::endl;
}

void Cat::addIdea(std::string idea){
    this->catBrain->addIdea(idea);
}

void Cat::printIdea(void){
    this->catBrain->printIdea();
}