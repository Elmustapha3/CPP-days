#include "Fstream.hpp"

std::string replace(std::string filecontent,std::string s1 ,std::string s2)
{
	std::string newfilecontent;
	
	int index = filecontent.find(s1);
	if(index == -1)
	{
		std::cout << "string to replace is not exite in the file\n";
		return "";
	}
	while (index != -1)
	{
		newfilecontent = filecontent.erase(index, s1.length());
		newfilecontent = newfilecontent.insert(index, s2);
		filecontent = newfilecontent;
		index = filecontent.find(s1, index + s2.length());
	}
	return newfilecontent;
}
