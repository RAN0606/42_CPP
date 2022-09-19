/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:56:18 by rliu              #+#    #+#             */
/*   Updated: 2022/09/19 17:28:17 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void){
    this->index = 0;
};

Phonebook::~Phonebook(void){};

void Phonebook::add_contact(void){
	std::cout << "Enter your first name: "
	std::cin >> this->contact[this->index]::first_name;


