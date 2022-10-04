/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:42 by rliu              #+#    #+#             */
/*   Updated: 2022/10/04 12:31:51 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv){
    (void) argc;
    (void) argv;
    std::string  str;
    Harl    instanceHarl;

    while(1){
        std::cout << "Put your complain(debug, info, warning or error) or Exit: ";
        std::getline(std::cin, str);
        if (str == "Exit" or std::cin.eof())
            return (0);
        instanceHarl.complain(str);    
    }
    return (0);
}