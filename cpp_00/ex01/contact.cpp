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

void Contact::check_str_empty(std::string str){
    while(str.empty()){
        std::cout << "This filed can not be empty: ";
        std::getline(std::cin, str);
    }       
}

void Contact::set_info(char *prompt, std::string info_type){
    std::cout << prompt;
    std::getline(std::cin, info_type);
    this->check_str_empty(info_type);
}

void Contact::set_all_info(int p_index){
    set_info("Enter your first_name:", this->first_name);
    set_info("Enter your last_name:", this->last_name);
    set_info("Enter your nick_name:", this->nick_name);
    set_info("Enter your phone_number:", this->phone_number);
    set_info("Enter your darkest_secret:", this->darkest_secret);
    this->index = p_index;
}

int Contact::check_contact(void){
    if (this->index >0)
        return (this->index);
    return (0);
}

void Contact::print_contact(void){
    std::cout <<"Index: " << this->index << std::endl;
    std::cout <<"First_name: " << this->first_name << std::endl;
    std::cout <<"last_name: " << this->last_name << std::endl;
    std::cout <<"Nick_name: " << this->nick_name << std::endl;
    std::cout <<"Phone_number: " << this-phone_number> << std::endl;
    std::cout <<"Darkest_secret: " << this->darkest_secret << std::endl;
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
std::string Contact::darkest_secret(void){
    return (this->darkest_secret);
}



