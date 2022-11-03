/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:53:37 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 17:29:16 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Cure::Cure(void):AMateria("cure"){}
Cure::Cure(const Cure &tocopie):AMateria("cure"){
    *this = tocopie;
}
Cure::~Cure(void){}

Cure &Cure::operator=(const Cure &toassigne){
    this->_type = toassigne._type;
    return (*this);
}


AMateria* Cure::clone() const{
    return(new Cure(*this));
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}