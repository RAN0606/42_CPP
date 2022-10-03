/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:39:44 by rliu              #+#    #+#             */
/*   Updated: 2022/10/03 18:12:13 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

Harl::Harl(void){}

Harl::~Harl(void){}

void Harl::debug(void){
    std::cout << 
    "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
    << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put 
    enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
    <<std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming
for years whereas you started working here since last month."
}

void Harl::error(void){
    std::cout << : "This is unacceptable ! I want to speak to the manager now."
    << std::enl;
}

void Harl::complain(std::string level){
    
    
}