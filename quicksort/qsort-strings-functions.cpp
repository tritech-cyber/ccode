/  CIS 235  Exercise 1  

#include <iostream>
#include <string>
#include <algorithm>
using namespace::std;

//  function will display on cout the contents of an arrary -  FUNCTION 1
void printArray( ostream & out, const string data[], int cellsUsed);


//  function will sort an array                             -  FUNCTION 2
void sortArray( string data[], int cellsUsed);



void main()
{
	const int CELLS = 5;
	string  names[CELLS] = { "tom", "mary", "ann", "bill","carol"};
    
	cout << "Original array" << endl;
	printArray(cout,names,CELLS);
	cout << endl;

	sortArray(names,CELLS);

	cout << "Sorted array" << endl;
	printArray(cout,names,CELLS);
	cout << endl;

	if (names[0][0] >  names[1][0])
		cout << "YAY" << endl;
}   // end main


//  write FUNCTION 1
void printArray( ostream & out, const string data[], int cellsUsed)
{
	for (int i=0; i <cellsUsed;i++)
	{
		out << data[i] << endl;
	}
}


//  write FUNCTION 2
void sortArray( string data[], int cellsUsed)
{
	sort(data, data+ cellsUsed);

}
