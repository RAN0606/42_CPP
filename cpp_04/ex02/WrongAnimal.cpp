/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:59:34 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:03:28 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(void){
    std::cout << "WrongAnimal default constructor callded !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopie){
     std::cout << "WrongAnimal copy constructor callded !" << std::endl;
     *this = toCopie;
}

WrongAnimal::~WrongAnimal(void){
    std::cout << "WrongAnimal destructor callded !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toAssigne){
    std::cout << "WrongAnimal assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return(*this);
}

void WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal make some noises!" << std::endl;
}

std::string WrongAnimal::getType(void) const{
    return(this->_type);
}