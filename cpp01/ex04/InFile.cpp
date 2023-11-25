#include "Fstream.hpp"

std::string getFileContent(std::string filename)
{
	std::string filecontent;
	std::string str;
	std::ifstream infile(filename.c_str());

	if(!infile.is_open())
	{
		std::cout << "File not existe\n";
		return "";
	} 
	getline(infile, filecontent);
	while (getline(infile, str))
	{
		filecontent += '\n';
		filecontent += str;
	}
	infile.close();
	if(filecontent == "")
		std::cout << "File is empty\n";
	return filecontent;
}
