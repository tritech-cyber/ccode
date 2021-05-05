#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
	const int arraylength = 20000;
	string  names[arraylength] = { "zzzz", "xxxxxx", "yyyyyy", "wwwwww", "ddddddd" };
	
	string wordlist[arraylength];
	ifstream filename("20000.txt");
    if(filename.is_open())
    {   for(int i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }
	cout<<names+arraylength<<endl;
	sort(wordlist, wordlist + arraylength);

	for (auto element : wordlist)
		cout << element <<' ';

	return 0;
}


/*
 http://www.cplusplus.com/forum/beginner/141751/
 https://www.codespeedy.com/cpp-program-to-sort-an-array-of-strings-alphabetically/
 */
