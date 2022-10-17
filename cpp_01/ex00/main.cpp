/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:59:10 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 13:54:54 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2){
        std::cout << "Plese input 2 arguments!" << std::endl;
        std::cout << "EX:  ./zombie foo" << std::endl;
        return (1);
    }
    randomChump(argv[1]);
    return (0);
}