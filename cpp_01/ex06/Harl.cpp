/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:39:44 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 17:41:48 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void){
    std::cout << "[DEBUG]" << std::endl;
    std::cout << 
    "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
    << std::endl << "I really do !" << std::endl;
}

void Harl::info(void){
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more !" <<std::endl; 
}

void Harl::warning(void){
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."<< std::endl 
    <<"I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now."
    << std::endl;
}

void Harl::complain(std::string level){

    std::string     complainType[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void            (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4 ; i++){
        if (level == complainType[i]){
            (this->*f[i])();
            return ;
        }
    }
}

void Harl::complain(int index){

    void            (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
        (this->*f[index])();
        std::cout << std::endl;
    }