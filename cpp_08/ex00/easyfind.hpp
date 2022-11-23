/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:59:17 by rliu              #+#    #+#             */
/*   Updated: 2022/11/22 16:13:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <map>
#include <list>
#include <exception>
#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(T intarray, int n){
        typename T::iterator it = std::find(intarray.begin(), intarray.end(), n);
        if(it == intarray.end())
            throw std::exception();
        return (*it);
}

template <typename T>
void tryfind(T intarray, int n){
    try{
        std::cout << easyfind(intarray, n) << std::endl;
    }
    catch (std::exception &e){
        std::cout << "cannot find number!" << std::endl;
    }
}

#endif