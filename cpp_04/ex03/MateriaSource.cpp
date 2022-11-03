/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:32:59 by rliu              #+#    #+#             */
/*   Updated: 2022/11/03 17:13:24 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#define SOURCE 4
MateriaSource::MateriaSource(void){
    for(int i = 0; i < SOURCE; i++)
        this->_source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src){
    *this = src;
}
MateriaSource::~MateriaSource(){
     for(int i = 0; i < SOURCE; i++) {
         if (this->_source[i]) {
            delete this->_source[i];
            this->_source[i] = NULL;
         }
     }
}
        
MateriaSource &	 MateriaSource::operator=(MateriaSource const & rhs){
     if (this == &rhs) 
        return *this;
    for(int i = 0; i < SOURCE; i++) {
        if (this->_source[i])
            delete this->_source[i];
        if (rhs._source[i])
            this->_source[i] = rhs._source[i]->clone();
    }
    return *this;
}
        
void  MateriaSource::learnMateria(AMateria* m){
    if (!m) {
        std::cout << "Amateria " << m << " no exist!" << std::endl;
        return;
    }
    for(int i = 0; i < SOURCE; i++) {
        if (!this->_source[i]) {
            this->_source[i] = m;
            return;
        }
    }
    delete m;
    if (this->_source[3])
        std::cout << "source is full!" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type){
    
    for(int i = 0; i < SOURCE; i++) {
        if (this->_source[i] != NULL && this->_source[i]->getType() == type)
            return this->_source[i]->clone();
    }
    std::cout << "ERROR: no type, cannot create materia!" << std::endl;
    return NULL;
}