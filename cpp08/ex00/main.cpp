#include "easyfind.hpp"
#include <vector>
int main()
{
	std::vector<int> arr;
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(2);
	easyfind(arr, 3);
	return 0;
}
