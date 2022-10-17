/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:42 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 17:39:23 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>
enum types {DEBUG, INFO, WARNING, ERROR, BLABLA};


int main(int argc, char **argv){
    
    int              x;
    std::string     complainType[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};    
    std::string     str;
    Harl            instanceHarl;
    
    if (argc != 2){
        std::cout <<"Please put 2 arguments, ex: ./Harlfileter WARNING/DEBUG/INFO/ERROR " << std::endl;
        return (1);
    }

    for (x = DEBUG; x <= ERROR; x++){
        if (complainType[x] == argv[1])
            break;
    }
    switch (x){

        case DEBUG      :   instanceHarl.complain(x++);
        case INFO       :   instanceHarl.complain(x++);
        case WARNING    :   instanceHarl.complain(x++);
        case ERROR      :   instanceHarl.complain(x++);
                            break;
        case BLABLA     :   std::cout << "[Probably complaining about insignificant problems]" 
                            << std::endl;
                            break;       
    }
    return (0);
}