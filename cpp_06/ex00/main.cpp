/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:14:18 by rliu              #+#    #+#             */
/*   Updated: 2022/11/15 16:17:01 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


int main(int ac, char **av) {
    
    
    if (ac != 2) {
        std::cout << "./Convert [args]" << std::endl; 
        return (1);
    }
    std::string str = av[1];
    
    Convert convert(str);
    convert.listDataType();
    return 0;
}