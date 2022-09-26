/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:56:18 by rliu              #+#    #+#             */
/*   Updated: 2022/09/26 16:11:06 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/*************public*****************************/

Phonebook::Phonebook(void){
    this->index = 0;
};

Phonebook::~Phonebook(void){
    std::cout << "Phonebook is canceled!" << std::endl;
};

void Phonebook::start_phonebook(void){
    std::string     order;

    while (std::cin){
   		std::cout << "Enter your order(ADD, SEARCH, EXIT): ";
    	std::getline(std::cin, order);
    	if(!order.compare("ADD")){
        	if(this->add_contact())
				return;
        }
    	else if (!order.compare("SEARCH")){
        	if(this->search_contact())
				return;
        }
		else if (!order.compare("EXIT"))
			return;
		else if (std::cin.eof())
			return;
		else{
			std::cout << "* cmd not found * " << std::endl;
			continue;
		}
	}
}

/*************************private*******************/

int Phonebook::add_contact(void){
    if(this->contacts[this->index].set_all_info(this->index + 1))
        return (1);
    if (++this->index == 8)
        this->index = 0;
    return (0);
};

int Phonebook::show_menu(void){
    char buffer[12];

    if (contacts[0].check_contact() == 0){
        std::cout << "This phonebook is empty now!" << std::endl;
        return (0);
    }
    std::cout << std::setw(10) << "Index" << "|"
    << std::setw(10) << "First name" << "|"
    << std::setw(10) << "Last name" << "|"
    << std::setw(10) << "nickname" << std::endl;
    for(int i = 0; i < 8 && contacts[i].check_contact() > 0; i++){
        std::cout << std::setw(10) << contacts[i].get_index() << "|";
        std::size_t length=contacts[i].get_first_name().copy(buffer, 10, 0);
        buffer[length] = '\0';
        if (contacts[i].get_first_name().length() > 10)
            buffer[9] ='.';
        std::cout << std::setw(10) << buffer << "|";
        length=contacts[i].get_last_name().copy(buffer, 10, 0);
        buffer[length] = '\0';
        if (contacts[i].get_last_name().length() > 10)
            buffer[9] ='.';
        std::cout << std::setw(10) << buffer << "|";
        length=contacts[i].get_nick_name().copy(buffer, 10, 0);
        buffer[length] = '\0';
        if (contacts[i].get_nick_name().length() > 10)
            buffer[9] ='.';
        std::cout << std::setw(10) << buffer << std::endl;
    }
    return (1);
}

int Phonebook::search_contact(void){
    std::string str;
    int index;

    if (!this->show_menu())
        return(0);
    std::cout << "Enter the index of contact: ";
    std::getline(std::cin,str);
	if (std::cin.eof())
		return (1);
    else if (str.length()==1 && str.compare("0") > 0 && str.compare("0") < 9){
        index = str.compare("0");
        if (contacts[index-1].check_contact() > 0)
            contacts[index-1].print_info();
        else
            std::cout << "Wrong index or doesn't exist" << std::endl;
    }
    else
        std::cout << "Wrong index or doesn't exist" << std::endl;
	
    return (0);
}