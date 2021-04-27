#include <iostream>
#include <fstream>
#include <array>
#include <string>


using namespace std;
//const int arraylength = 26;
const int  arraylength = 9897;
array<string,arraylength> selectSort(array<string,arraylength>list);
array<string,arraylength> insertSort(array<string,arraylength>list);
void printArray(array<string,arraylength>list);

int main(){

	// load array from file 						
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
	cout<<"Array unsorted"<<endl;
	//printArray(wordlist);
	cout<<"\n\nSelection Sort"<<endl;
	cin>>p;
	arraysorted = selectSort(wordlist);
	printArray(arraysorted);
	cout<<"\n\nInsertion Sort"<<endl;
	arraysorted = insertSort(wordlist);
	//printArray(arraysorted);
    return 0;
}


array<string,arraylength> selectSort(array<string,arraylength>list){
	int n = list.size();
		//pos_min is short for position of min
		int swap = 0;
	int compare = 0;
		string temp;
        int pos_min,i,j;
        for (i=0; i < n-1; i++){
			pos_min = i;//set pos_min to the current index of array
                for (j=i+1; j < n; j++){
					if (list[j] < list[pos_min]){
						pos_min=j;
						compare++;
					}
					//pos_min will keep track of the index that min is in, this is needed when a swap happens
                }  
								//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
				if (pos_min != i){
					compare++;
					temp = list[i];
					list[i] = list[pos_min];
					list[pos_min] = temp;
					swap++;
				}
        }
		cout<<"compare "<<compare<<endl;
		cout<<"swap "<<swap<<endl;
        return list;
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
				 if(list[j-1]>list[j])compare++;//compare . remove to speed up
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
	cout<<"compare "<<compare<<endl;
	cout<<"no swap "<<noswap<<endl;
	return list;
}

void printArray(array<string,arraylength>list){
	for (int i = 0;i < arraylength ;i++){
		cout<<list[i]<<" ";
		if(i % 13 == 0 && i != 0)cout<<endl;
	}
}
