#include <iostream>
#include <string>
#include <fstream>
#include <array>

int main()
{
    using namespace std;
	int i;
	const int  array_length = 9900;
	array<string,array_length> wordlist;
	//string wordlist[26];
    ifstream filename("10000.txt");
    if(filename.is_open())
    {   for(i = 0; i < array_length; ++i)
        {
            filename >> wordlist[i];
        }
    }
    // print list of words
    for(i = 0; i < array_length;i++){
			cout<<wordlist[i]<<endl;
	}

}
