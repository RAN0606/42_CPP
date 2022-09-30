/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:19:52 by rliu              #+#    #+#             */
/*   Updated: 2022/09/30 18:55:59 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftReplace.hpp"
#include <fstream>
#include <iostream>

void    ftReplace(std::string filename, std::string s1, std::string s2){
     
    char            fileOrigin[filename.length()+2];
    size_t          length =filename.copy(fileOrigin,filename.length(),0); // copy name string to *char
    fileOrigin[length] = '\0';
    std::cout << "test filename: " << fileOrigin << std::endl;
    std::ifstream   ifs(fileOrigin);
    std::string     filenamereplace = filename + ".replace";
    char            fileReplace[filenamereplace.length()+1];
    length= filenamereplace.copy(fileReplace,filenamereplace.length(),0);
    fileReplace[length] = '\0';
     std::cout << "test filenameReplace: " << fileReplace << std::endl;
    std::ofstream   ofs(fileReplace);
    std::string     temp;
    size_t          position = 0;
    char            c = '\0';
    
    while (ifs.get(c)) temp.push_back(c);
    temp.push_back('\0');
    
    size_t f = temp.find(s1, 0);
    while ( f != std::string::npos){
        for (size_t i = position; i < f; i++){
            ofs << temp[i];
        }
        ofs << s2;
        position += s1.length();
        f = temp.find(s1, f + s1.length());
    }
    ifs.close();
    ofs.close();
}
