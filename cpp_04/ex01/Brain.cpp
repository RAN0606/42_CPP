/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:03:06 by rliu              #+#    #+#             */
/*   Updated: 2022/10/26 19:11:22 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopie){
    std::cout << "Brain copie constructor called" << std::endl;
    *this = toCopie;
}

Brain::~Brain(void){
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &toAssigne){
    std::cout << "Brain assignement constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
		this->ideas[i] = toAssigne.ideas[i];
    return(*this);
}

void Brain::addIdea(std::string idea){
    int i = 0;
    while (!this->ideas[i].empty())
        i++;
    if (i < 100)
        this->ideas[i] = idea;
    else 
        std::cout << "Idea list is full";
}

void Brain::printIdea(void){
    for(int i = 0; i < 100 && !this->ideas[i].empty(); i++)
        std::cout << "Idea " << i << ":" << this->ideas[i] << std::endl;
}
