#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
	int i;
	const int arraylength = 20000;	
	string wordlist[arraylength];
	ifstream filename("20000.txt");
    if(filename.is_open())
    {   for(int i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }

	sort(wordlist, wordlist + arraylength);

	for (i = 0; i < arraylength;i++)
		cout << wordlist[i] <<endl;

	return 0;
}


/*
 http://www.cplusplus.com/forum/beginner/141751/
 https://www.codespeedy.com/cpp-program-to-sort-an-array-of-strings-alphabetically/
 */
