/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:33:49 by rliu              #+#    #+#             */
/*   Updated: 2022/09/26 18:36:29 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

/************************public*********************/

Contact::Contact(void){
    this->index = 0;
}

Contact::~Contact(void){
    std::cout << "Contact is canceled!" << std::endl;
}

int Contact::set_all_info(int p_index){
    if (this->_setFirstName() || this->_setLastName() || this->_setNickName()\
        || this->_setPhoneNb() || this->_setSecret())
        return (1);
    this->index = p_index;
    return (0);
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

/************************private**************/

int Contact::_setFirstName(void){
	std::cout << "Enter your first name:";
	getline (std::cin,this->first_name);
	if (std::cin.eof())
		return (1);
	if (this->first_name.empty())
	{
		std::cout << "this filed can not be empty!" << std::endl;
		return(this->_setFirstName());
	}
	return (0);
}

int Contact::_setLastName(void){
	std::cout << "Enter your last name:";
	getline (std::cin,this->last_name);
	if (std::cin.eof())
		return (1);
	if (this->last_name.empty())
	{
		std::cout << "this filed can not be empty!" << std::endl;
		return(this->_setLastName());
	}
	return (0);
}

int Contact::_setNickName(void){
	std::cout << "Enter your nick name:";
	getline (std::cin,this->nick_name);
	if (std::cin.eof())
		return (1);
	if (this->nick_name.empty())
	{
		std::cout << "this filed can not be empty!" << std::endl;
		return(this->_setNickName());
	}
	return (0);
}

int Contact::_setPhoneNb(void){
	std::cout << "Enter your phone number:";
	getline (std::cin,this->phone_number);
	if (std::cin.eof())
		return (1);
	if (this->phone_number.empty())
	{
		std::cout << "this filed can not be empty!" << std::endl;
		return(this->_setPhoneNb());
	}
	return (0);
}

int Contact::_setSecret(void){
	std::cout << "Enter your darkest secret:";
	getline (std::cin,this->darkest_secret);
	if (std::cin.eof())
		return (1);
	if (this->darkest_secret.empty())
	{
		std::cout << "this filed can not be empty!" << std::endl;
		return(this->_setSecret());
	}
	return (0);
}