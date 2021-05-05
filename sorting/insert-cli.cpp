#include <iostream>
#include <fstream>
#include <array>
#include <string>


using namespace std;
//const int arraylength = 26;
const int  arraylength = 10000;

array<string,arraylength> insertSort(array<string,arraylength>list);
void printArray(array<string,arraylength>list);


int main(int argc, char **argv)
{
    cout<< argv[1]<<endl;
    int thelength = stoi(argv[1]);	
	int i;
	string p;
	array<string,arraylength> wordlist;
    ifstream filename("10000.txt");
    if(filename.is_open())
    {   for(i = 0; i < arraylength; ++i)
        {
            filename >> wordlist[i];
        }
    }
							
	// sorting
	array<string,arraylength>arraysorted;
	//cout<<"Array unsorted"<<endl;
	//printArray(wordlist);
	//cout<<"\n\nInsertion Sort"<<endl;
	arraysorted = insertSort(wordlist);
	//printArray(arraysorted);
	cout<<"Insert Sort Completed"<<endl;
    return 0;
}


array<string,arraylength> insertSort(array<string,arraylength>list){
	int i,j;
	int p;
	int noswap = 0;
	int compare = 0;
	string temp;
	int n = list.size();//array length
                
	for (i = 0; i < n; i++){
		j = i;
		compare++;
			while (j > 0 && list[j] < list[j-1]){
				temp = list[j];
				list[j] = list[j-1];
				list[j-1] = temp;
				j--;
				noswap++;
			}
			//cout << " loop i "<<i<<endl;
			//cin>>p;
			//printArray(list);
	}

	return list;
}

void printArray(array<string,arraylength>list){
	for (int i = 0;i < arraylength ;i++){
		cout<<list[i]<<" "<<endl;
		//if(i % 13 == 0 && i != 0)cout<<endl;
	}
}
