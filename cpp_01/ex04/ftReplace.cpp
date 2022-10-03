/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftReplace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rliu <rliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:19:52 by rliu              #+#    #+#             */
/*   Updated: 2022/10/03 13:47:39 by rliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftReplace.hpp"
#include <fstream>
#include <iostream>

void    ftReplace(std::string filename, std::string s1, std::string s2){
    
    // Open input files 
    char            fileOrigin[filename.length()+2];
    size_t          length =filename.copy(fileOrigin,filename.length(),0); // copy name string to *char
    fileOrigin[length] = '\0';
    std::ifstream   ifs(fileOrigin);
    // Open output files
    std::string     filenamereplace = filename + ".replace";
    char            fileReplace[filenamereplace.length()+1];
    length= filenamereplace.copy(fileReplace,filenamereplace.length(),0);
    fileReplace[length] = '\0';
    std::ofstream   ofs(fileReplace);
    // varialbles temporarily for replace
    std::string     temp;
    size_t          position = 0;
    char            c = '\0';
    
    while (ifs.get(c)) temp.push_back(c); //put every character of file in one string temp;
    
    for (size_t f = temp.find(s1,0); f != std::string::npos;\
    f = temp.find(s1, f + s1.length())){  // loop to find the index of s1 from the first to end;
        for (size_t i = position; i < f; i++) ofs << temp[i];   //loop put the characters which are before next s1 in the outfile 
        position = f + s1.length();
        ofs << s2; //replace s1 by s2 in outfiles;
    }
    ifs.close(); 
    ofs.close(); // close the filestream(if i don't do this?)
}