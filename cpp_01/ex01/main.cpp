/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:59:10 by rliu              #+#    #+#             */
/*   Updated: 2022/09/29 16:32:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(int argc, char** argv)
{
    (void) argc;
	(void) argv;
    Zombie* zombiep;
    int     N = 5;
    std::string name("foooo")

	zombiep = zombieHorde(N,name);
    
    for (int i = 0; i < N; i++){
        zombiep[i].annoncent();
    }

    delete [] zombiep;
    return (0);
}
