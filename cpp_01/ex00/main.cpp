/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:59:10 by rliu              #+#    #+#             */
/*   Updated: 2022/10/17 16:28:35 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

int main(void)
{ 
    randomChump("foo");
    Zombie* newz=newZombie("foo2");
    newz->annoncent();
    delete newz;
    return (0);
}