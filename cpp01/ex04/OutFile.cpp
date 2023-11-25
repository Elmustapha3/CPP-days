#include "Fstream.hpp"


void storeFileContent(std::string newfilecontent, std::string newfilename)
{
	std::ofstream outfile;
	outfile.open(newfilename.c_str());
	outfile << newfilecontent ;
	outfile.close();
}
