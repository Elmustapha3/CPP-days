#ifndef FSTREAM_HPP
# define FSTREAM_HPP

#include <iostream>
#include <fstream>
#include <string>

std::string getFileContent(std::string filename);
void storeFileContent(std::string newfilecontent, std::string newfilename);
std::string replace(std::string filecontent,std::string s1 ,std::string s2);

#endif
