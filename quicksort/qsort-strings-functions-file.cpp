#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <algorithm>
using namespace std;


const int arraylength = 20000;
//  function will display on cout the contents of an arrary -  FUNCTION 1
//void printArray( ostream & out, const string data[], int cellsUsed);


//  function will sort an array  FUNCTION 2
void sortArray(array<string,arraylength>list, int cellsUsed);


int main()
{
	const int CELLS = 20000;
	
	int i;
	//string  names[CELLS] = { "tom", "mary", "ann", "bill","carol"};
	array<string,arraylength>wordlist;
	ifstream filename("20000.txt");
    if(filename.is_open())
    {   for(i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }
	cout << "Original array" << endl;
	//printArray(cout,wordlist,CELLS);
	cout << endl;

	sortArray(wordlist,CELLS);

	cout << "Sorted array" << endl;
	//printArray(wordlist,CELLS);
	cout << endl;


	return 0;
}   // end main





//  write FUNCTION 2
void sortArray( array<string,arraylength>list, int cellsUsed)
{
	sort(list, list+ cellsUsed);

}
