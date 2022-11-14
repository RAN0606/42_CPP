/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:34 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 18:28:18 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(void){
    std::cout << "Animal default constructor callded !" << std::endl;
}

Animal::Animal(const Animal &toCopie){
     std::cout << "Animal copy constructor callded !" << std::endl;
     *this = toCopie;
}

Animal::~Animal(void){
    std::cout << "Animal destructor callded !" << std::endl;
}

Animal &Animal::operator=(const Animal &toAssigne){
    std::cout << "Animal assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return(*this);
}

void Animal::makeSound(void) const{
    std::cout << "Animal make some noises!" << std::endl;
}

std::string Animal::getType(void) const{
    return(this->_type);
}