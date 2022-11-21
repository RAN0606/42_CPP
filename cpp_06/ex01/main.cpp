/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:14:38 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 14:14:57 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <typeinfo>

int main()
{
    std::cout << "------data-------" << std::endl;
    Data data(42, -42, 42.42);
    std::cout << "char: " << data.getChar() << std::endl;
    std::cout << "int: " << data.getInt() << std::endl;
    std::cout << "double: " << data.getDouble() << std::endl;
    std::cout << std::endl;
    
    std::cout << "------serialize------" << std::endl;
    uintptr_t n = serialize(&data);
    std::cout << n << std::endl;
    std::cout << std::endl;
    
    std::cout << "------deserialize--------" << std::endl;
    Data *newdata;
    newdata = deserialize(n);
    std::cout << "char: " << newdata->getChar() << std::endl;
    std::cout << "int: " << newdata->getInt() << std::endl;
    std::cout << "double: " << newdata->getDouble() << std::endl;
    return 0;
}