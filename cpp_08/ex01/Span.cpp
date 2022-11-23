/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:17:55 by rliu              #+#    #+#             */
/*   Updated: 2022/11/23 16:47:42 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>
#include <cmath>
#include <list>
#include <exception>
#include <iostream>

Span::Span(void){}

Span::Span(unsigned int n): _size(n), _nbSaved(0){}

Span::Span(Span &copie){
    *this = copie;
}

Span &Span::operator=(Span &assigne){
    if(this == &assigne)
        return (*this);
    this->_intList = assigne._intList;
    this->_size = assigne._size;
    this->_nbSaved = assigne._nbSaved;
    return(*this);
}

Span::~Span(void){}

void Span::addNumber(int n){
    if (this->_nbSaved >= this->_size)
        throw Span::fullVectorException();
    this->_intList.push_back(n);
    this->_nbSaved++;
}

int Span::shortestSpan(void){
    std::list<int>  listSpan;
    if (this->_nbSaved <= 1)
		throw Span::noSpanException();
	this->_intList.sort();
	std::list<int>::iterator it=this->_intList.begin();
	std::list<int>::iterator itnext=it;
	for(itnext++; itnext != this->_intList.end();itnext++){
		listSpan.push_back(*itnext - *it);
		it++;
	}
	listSpan.sort();
	return(*(listSpan.begin()));
}
int Span::longestSpan(void) {
    if (this->_nbSaved <= 1)
		throw Span::noSpanException();
	this->_intList.sort();
	std::list<int>::iterator itmini=this->_intList.begin();
	std::list<int>::iterator itmaxi =this->_intList.end();
	itmaxi--;
	return(*itmaxi - *itmini);
}

const char *Span::fullVectorException::what() const throw() {
    return "Cannot Add Number! is Full!";
}

const char *Span::noSpanException::what() const throw() {
    return "Size is less 2, can't have span!";
}

