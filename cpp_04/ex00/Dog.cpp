/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:49:58 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 16:55:50 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

Dog::Dog(void) : Animal(){
    std::cout << "Dog default constructor callded !" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &toCopie): Animal(){
     std::cout << "Dog copy constructor callded !" << std::endl;
     *this = toCopie;
}

Dog::~Dog(void){
    std::cout << "Dog destructor callded !" << std::endl;
}

Dog &Dog::operator=(const Dog &toAssigne){
    std::cout << "Dog assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return (*this);
}

void Dog::makeSound(void) const{
    std::cout << this->_type << " wow wow! " << std::endl;
}

/*std::string Dog::getType(void) const{
    return(this->_type);
}*/