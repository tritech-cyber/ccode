#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	const int arraylength = 5;
	std::string  names[arraylength] = { "zzzz", "xxxxxx", "yyyyyy", "wwwwww", "ddddddd" };
	std::cout<<names+arraylength<<endl;
	std::sort(names, names + arraylength);

	for (auto element : names)
		std::cout << element << ' ';

	return 0;
}


/*
 http://www.cplusplus.com/forum/beginner/141751/
 https://www.codespeedy.com/cpp-program-to-sort-an-array-of-strings-alphabetically/
 */
