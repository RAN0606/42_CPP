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

Phonebook::Phonebook(void){
    this->index = 0;
};

Phonebook::~Phonebook(void){};

void Phonebook::add_contact(void){
    this->contacts[this->index].set_all_info(this->index + 1);
    if (++this->index == 8)
        this->index = 0;
};

int Phonebook::show_menu(void){
    if (contacts[0].check_contact() == 0){
        std::cout << "This phonebook is empty now!";
        return (0);
    }
    std::cout << std::setw(10) << "First name" << "|"\
              << std::setw(10) << "Last name" << "|"\
             << std::setw(10) << "Nickname" << "|"\
             << std::setw(10) << "Phone number" << std::endl;
    for(int i = 0; i < 8 && contacts[i].check_contact > 0; i++){
        std::cout << std::setw(10) << contacts[i].get_first_name() << "|"\
              << std::setw(10) << contacts[i].get_last_name() << "|"\
             << std::setw(10) << contacts[i].get_nick_name()  << "|"\
             << std::setw(10) << contacts[i].get_number()  << std::endl;
    }
    return (1);
}

void Phonebook::search_contact(){
    std::string str;
    int         index;

    index = 0;
    if (!this->show_menu())
        return;
    std::cout << "Enter the index of contact: ";
    std::cin >> index;
    if (index > 0 && index < 9 && contacts[index-1].check_contact() > 0)
        contacts[index-1].print_contact();
    else
        std::cout << "Wrong index or doesn't exist";
}


