/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:57:29 by rliu              #+#    #+#             */
/*   Updated: 2022/11/14 18:48:06 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include Convert.hpp
Convert::Convert(void){
    std::cout << "Convert default constructor!" << std::endl;
}
Convert::Convert(std::string data): _data(data){
    std::cout << "Convert data constructor!" << std::endl;
}
Convert::Convert(Convert const &tocopy){
    std::cout << "Convert copy constructor!" << std::endl;
    *this = tocopy;
}
Convert::~Convert(void){
     std::cout << "destructor!" << std::endl;
}

Convert::operator char(void){
    
    
    
}
        
Convert &Convert::operator=(Convert const &toassigne){
    this->_data = toassigne._data;
        return(*this);
}


Convert::listdatatype(std::string data){
    
    
}
