/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:14:30 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 14:31:02 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftReplace.hpp"
#include <iostream>

int main(int argc, char **argv){
    if (argc != 4 || !*argv[1] || !*argv[2] || !*argv[3]){
        std::cout << "Plese input 4 arguments! Cannot be empty string" << std::endl;
        std::cout << "EX:  ./sed filetest a b" << std::endl;
        return (1);
    }
    ftReplace(argv[1], argv[2], argv[3]);
    return (0);
}