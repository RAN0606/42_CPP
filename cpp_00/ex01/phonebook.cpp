/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:56:18 by rliu              #+#    #+#             */
/*   Updated: 2022/08/25 16:17:03 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
    this->index = 0;
    std::cout <<"this is constrctor index is" <<this->index;
};
Phonebook::~Phonebook(){};

