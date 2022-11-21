/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:53:33 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 19:00:07 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {

	std::cout << " ~~~~~ int test ~~~~~ \n";
	{
		int	array[] = {1, 2, 3, 4, 5};
		iter (array, 5, print);
		std::cout << std::endl;

		iter (array, 5, doubleitem);
		iter (array, 5, print);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << " ~~~~~ float test ~~~~~ \n";
	{
		float	array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
		iter (array, 5, print);
		std::cout << std::endl;

		iter (array, 5, doubleitem);
		iter (array, 5, print);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << " ~~~~~ char test ~~~~~ \n";
	{
		char	array[] = {'*', 'h', '0', 'x', 'A'};
		iter (array, 5, print);
		std::cout << std::endl;

		iter (array, 5, doubleitem);
		iter (array, 5, print);
		std::cout << std::endl;
	}

	std::cout << " ~~~~~ string test ~~~~~ \n";
	{
		std::string	array[] = {"hello", "this", "is", "an", "array"};
		iter (array, 5, print);
		std::cout << std::endl;
		
		iter (array, 5, doubleitem);
        iter (array, 5, print);
	}
	std::cout << std::endl;

}