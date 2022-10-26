/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:41:06 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 17:21:53 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>
WrongCat::WrongCat(void) : WrongAnimal(){
    std::cout << "WrongCat default constructor callded !" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &toCopie): WrongAnimal(){
     std::cout << "WrongCat copy constructor callded !" << std::endl;
     *this = toCopie;
}

WrongCat::~WrongCat(void){
    std::cout << "WrongCat destructor callded !" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &toAssigne){
    std::cout << "WrongCat assigne constructor callded !" << std::endl;
    this->_type = toAssigne._type;
    return (*this);
}
void WrongCat::makeSound(void) const{
    std::cout << this->_type << "don't miaowwwwwww! But it barks " << std::endl;
}

/*void WrongCat::getType(void) const{
    return(this->_type);
}*/