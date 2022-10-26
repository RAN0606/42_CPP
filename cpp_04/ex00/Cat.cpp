/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:06 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 16:57:36 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

#include <iostream>
#include <string>
Cat::Cat(void) : Animal(){
    std::cout << "Cat default constructor callded !" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(const Cat &toCopie): Animal(){
     std::cout << "Cat copy constructor callded !" << std::endl;
     *this = toCopie;
}

Cat::~Cat(void){
    std::cout << "Cat destructor callded !" << std::endl;
}

Cat &Cat::operator=(const Cat &toAssigne){
    std::cout << "Cat assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return (*this);
}
void Cat::makeSound(void) const{
    std::cout << this->_type << " miaowwwwwww! " << std::endl;
}

/*void Cat::getType(void) const{
    return(this->_type);
}*/