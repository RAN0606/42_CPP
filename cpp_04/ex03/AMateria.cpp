/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:23:53 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:23:34 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void){}
AMateria::AMateria(std::string const &type) :_type(type){}
Amateria::AMateria(const AMateria &tocopie){
    *this = tocopie;
}
AMateria::~AMateria(void){}

AMateria &AMateria::operator=(const AMateria &toassigne){
    this->_type = toassigne._type;
}
std::string const &AMaterial::getType() const {
    return(this->_type);
}

Void AMateria::use(ICharacter& target){
    std::cout << target.getName() << std::endl; 
}