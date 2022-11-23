/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:58:52 by rliu              #+#    #+#             */
/*   Updated: 2022/11/22 15:59:47 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>


void dispayint(int i) 
{
    std::cout << i << std::endl;
}
int main()  
{  
    std::cout << "-----------test with vector---------" << std::endl;
    std::vector<int> myvector;//tableau
    for(int i=0;i<10;i++)
    {
        myvector.push_back(i);
        std::cout<<myvector[i]<<" ";
    }
    std::cout << std::endl;
    
    std::cout << "find: ";
    tryfind(myvector, 1);
    
    std::cout << "find: ";
    tryfind(myvector, 2);
    tryfind(myvector, 100);
    
    std::cout << "-----------test with list---------" << std::endl;
    std::list<int> lst; //list chaine
    lst.push_back(1);
    lst.push_back(21);
    lst.push_back(42);
    std::for_each(lst.begin(), lst.end(), dispayint);
    
    std::cout << "find: ";
    tryfind(lst, 42);
    
    tryfind(lst, 100);
    return 0;
}  