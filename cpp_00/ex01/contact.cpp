/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:33:49 by rliu              #+#    #+#             */
/*   Updated: 2022/08/25 16:02:39 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact(void){
    this->index = 0;
}

Contact::~Contact(void){}


void Contact::set_all_info(int p_index){
    std::cout << "Enter your first_name:";
    std::cin >> this->first_name;
    std::cout << "Enter your last_name:";
    std::cin >> this->last_name;
    std::cout << "Enter your nick_name:";
    std::cin >> this->nick_name;
    std::cout << "Enter your phone_number:";
    std::cin >> this->phone_number;
    std::cout << "Enter your darkest_secret:";
    std::cin >> this->darkest_secret;
    this->index = p_index;
}

int Contact::check_contact(void){
    if (this->index >0)
        return (this->index);
    return (0);
}

void Contact::print_info(void){
    std::cout <<"Index: " << this->index << std::endl;
    std::cout <<"First_name: " << this->first_name << std::endl;
    std::cout <<"last_name: " << this->last_name << std::endl;
    std::cout <<"Nick_name: " << this->nick_name << std::endl;
    std::cout <<"Phone_number: " << this->phone_number << std::endl;
    std::cout <<"Darkest_secret: " << this->darkest_secret << std::endl;
}
int Contact::get_index(void){
    return (this->index);
}
std::string Contact::get_first_name(void){
    return (this->first_name);
}

std::string Contact::get_last_name(void){
    return (this->last_name);
}

std::string Contact::get_nick_name(void){
    return (this->nick_name);
}
std::string Contact::get_number(void){
    return (this->phone_number);
}
std::string Contact::get_secret(void){
    return (this->darkest_secret);
}



