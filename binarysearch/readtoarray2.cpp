#include <iostream>
#include <string>
#include <fstream>
#include <array>
const int  arraylength = 9897;
int main()
{
    using namespace std;
	int i;

	array<string,arraylength> wordlist;
	//string wordlist[26];
    ifstream filename("10000.txt");
    if(filename.is_open())
    {   for(i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }
    // print list of words
    int count = 0;
    for(i = 0; i < arraylength;i++){
		if (wordlist[i].length() == 10){count++;
			cout<<wordlist[i]<<" "<<count<<" "<<endl;
		}
	}

}
