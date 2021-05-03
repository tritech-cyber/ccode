// find random word in an array
#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <random>

using namespace std;
//const int arraylength = 26;
const int  arraylength = 10000;
array<string,arraylength> selectSort(array<string,arraylength>list);
int binary_search(array<string,arraylength> blist, string search_string);
void printArray(array<string,arraylength>list);

int main(){
	// Set up random double
	default_random_engine PRNG(random_device {}());
	uniform_real_distribution<double> dist(97.0, 123.0);
	int i,index;
	int rint = 0,count = 1;
	string temp = "";
	string word = "";
	// load array from file 						
	array<string,arraylength> wordlist;
    ifstream filename("10000random.txt");
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
	arraysorted = selectSort(wordlist);
	printArray(arraysorted);
	bool done = false;
	while (!done){
		// create a 10 letter word
		for (i = 0; i < 10; i++){
				rint = (int)dist(PRNG);temp = (char)rint;
				word = word + temp;
		}
		index = binary_search(arraysorted, word);
		if (index != -1) done = true;
		cout << "search index = " << index <<" word "<<word<< " count "<<count<<endl;
		count++;
		word = "";
	}
	
	
	
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
int binary_search(array<string, arraylength> blist, string search_string){
	int n = blist.size();
    //cout<< "\nList_length "<<" n "<< n <<endl;
    int s = 0;//  start of list
    int e = n - 1; // end index of the list
    int m = (s + e) / 2; // middle
	int count = 1;
    while (s <= e)
    {     //cout<<" s m e count "<<s<<" , "<<m<<" , "<< e << " - "<<count<<endl;
		
		 if (blist[m] == search_string)
            return m;
        else
        { if (blist[m] < search_string) 
            { s = m + 1;
              m = (e + s) / 2;
            }
            else
            {  e = m - 1;
               m = (e + s) / 2;    
            }
        }
        count++;
    }
    return -1;
}
//int maxStringLength(array<string,arraylength>list){
//	
//}

void printArray(array<string,arraylength>list){
	for (int i = 0;i < arraylength ;i++){
		int sl = list[i].length();  
		if (sl == 10)cout<<list[i]<<" ";
		if(i % 13 == 0 && i != 0)cout<<endl;
	}
}
