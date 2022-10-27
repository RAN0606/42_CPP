/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:53:37 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 17:00:03 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Cure::Cure(void):AMateria(){}
Cure::Cure(std::string const &type) :AMateria(type){}MAmateria::Cure(const Cure &tocopie){
    *this = tocopie;
}
Cure::~Cure(void){}

Cure &Cure::operator=(const Cure &toassigne){
    this->_type = toassigne._type;
    return (*this);
}
std::string const &Curel::getType() const {
    return(this->_type);
}
AMatetria* Cure::clone(){
    Return(new Cure());
}

Void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;