/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:57:29 by rliu              #+#    #+#             */
/*   Updated: 2022/11/21 12:37:40 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


Convert::Convert(void){
   // std::cout << "Convert default constructor!" << std::endl;
}
Convert::Convert(std::string data): _data(data){
    //std::cout << "Convert data constructor!" << std::endl;
}
Convert::Convert(Convert const &tocopy){
    //std::cout << "Convert copy constructor!" << std::endl;
    *this = tocopy;
}
Convert::~Convert(void){
    // std::cout << "destructor!" << std::endl;
}
        
Convert &Convert::operator=(Convert const &toassigne){
    if (this == &toassigne)
        return(*this);
    this->_data = toassigne._data;
        return(*this);
}

Convert::operator char(void){
    const char* strptr = (this->_data).c_str();
    char*   endptr = NULL;
    int     c = 0; 
    c = std::strtold(strptr, &endptr);
    std::cout << "test char" << *endptr << std::endl;
    std::cout << "test c" << c << std::endl;
    if ( strptr == endptr || (*endptr == 'f' && *(endptr+1) != '\0')
    ||(*endptr  && *endptr != 'f')|| c < 0 || c > 127 )
        throw Convert::impossibleException();
    
    if (c < 32 || c > 126){
        throw Convert::noDisplayException();
    }
    return  static_cast<char>(c); // try()
}

Convert::operator int(void){
    const char* strptr = (this->_data).c_str();
    char* endptr = NULL;
    long  l = 0; 
    l = std::strtold(strptr, &endptr);
    if(strptr == endptr || l > INT32_MAX || l < INT32_MIN
        ||(*endptr == 'f' && *(endptr+1) != '\0')
        ||(*endptr  && *endptr != 'f'))
        throw Convert::impossibleException();
    return static_cast<int>(l);
}

Convert::operator float(void){
    const char* strptr = (this->_data).c_str();
    char* endptr = NULL;
    long double  f = 0; 
    f = std::strtold(strptr, &endptr);
    if (strptr == endptr || (*endptr == 'f' && *(endptr+1) != '\0'))
        throw Convert::impossibleException();
    
    return static_cast<float>(f);
}

Convert::operator double(void){
    const char* strptr = (this->_data).c_str();
    char* endptr = NULL;
    long double  ld = 0; 
    ld = std::strtold(strptr, &endptr);
    if (strptr == endptr || (*endptr == 'f' && *(endptr+1) != '\0'))
        throw Convert::impossibleException();
    return static_cast<double>(ld);    
}

std::string Convert::getData(void){
    return (this->_data);
}

char const * Convert::noDisplayException::what() const throw(){
    return "Non displayable ";
}
                
char const * Convert::impossibleException::what() const throw(){
    return "impossible ";
}

void Convert::listDataType(void){
    std::cout << "char: ";
    try{
        char c = *this;
        std::cout << c<< std::endl; 
    }       
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "int: ";
    try{
        int i = *this;
        std::cout << i << std::endl; 
    }       
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

        std::cout << "float: ";
    try{
        float f = *this;
       
        std::cout << f;
        ((int)(f * 1000) % 1000 == 0) ? std::cout << ".0f\n" : std::cout << "f\n" ;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    
    std::cout << "double: ";
    try{
        double d = *this;
        std::cout  << d ;
        ((int)(d * 1000) % 1000 == 0) ? std::cout << ".0\n" : std::cout << "\n" ;
    }       
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
