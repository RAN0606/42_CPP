/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:56:31 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 16:58:54 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <string>
#include <iostream>

Ice::Ice(void):AMateria("ice"){}
Ice::Ice(const Ice &tocopie):AMateria("ice"){
    *this = tocopie;
}
Ice::~Ice(void){}

Ice &Ice::operator=(const Ice &toassigne){
    this->_type = toassigne._type;
    return (*this);
}


AMateria *Ice::clone() const{
    return(new Ice(*this));
}

void Ice::use(ICharacter& target){
   std::cout << "* shoots an ice bolt at " << target.getName() << "*\"" << std::endl;  
}