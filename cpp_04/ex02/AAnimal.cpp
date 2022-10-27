/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:34 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 13:55:29 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>
#include <string>

AAnimal::AAnimal(void){
    std::cout << "AAnimal default constructor callded !" << std::endl;
}

AAnimal::AAnimal(const AAnimal &toCopie){
     std::cout << "AAnimal copy constructor callded !" << std::endl;
     *this = toCopie;
}

AAnimal::~AAnimal(void){
    std::cout << "AAnimal destructor callded !" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &toAssigne){
    std::cout << "AAnimal assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return(*this);
}

void AAnimal::makeSound(void) const{
    std::cout << "AAnimal make some noises!" << std::endl;
}

std::string AAnimal::getType(void) const{
    return(this->_type);
}