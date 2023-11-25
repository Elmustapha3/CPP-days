#include "Fstream.hpp"



int main(int ac, char *av[])
{
	if(ac != 4)
	{
		std::cout << "Arguments are not equal three\n";
		return 0;
	}
	std::string filename = av[1];
	std::string newfilename = filename + ".replace";
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string filecontent, newFileContent;

	if(s1.empty())
	{
		std::cout << "Second argumrents is empty" << std::endl;
		return 0;
	}
	filecontent = getFileContent(filename);
	if(filecontent != "")
	{
		newFileContent = replace(filecontent, s1, s2);
		if(newFileContent != "")
			storeFileContent(newFileContent, newfilename);
	}
	return 0;
}

