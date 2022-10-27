/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:56:31 by rliu              #+#    #+#             */
/*   Updated: 2022/10/27 16:59:45 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Ice::Ice(void):AMateria(){}
Ice::Ice(std::string const &type) :AMateria(type){}MAmateria::Ice(const Ice &tocopie){
    *this = tocopie;
}
Ice::~Ice(void){}

Ice &Ice::operator=(const Ice &toassigne){
    this->_type = toassigne._type;
    return (*this);
}
std::string const &Icel::getType() const {
    return(this->_type);
}
AMateria* Ice::clone(){
    Return(new Ice());
}

Void Ice::use(ICharacter& target){
   std::cout << "* shoots an ice bolt at " << target.getName() << "*\"" << std::endl;  
}