#include <iostream>
#include <array>
#include <string>
#include <random>
using namespace std;
const int alength = 14;
int binary_search(array<string,alength> blist, string search_string);

int main(){
	// Set up random double
	default_random_engine PRNG(random_device {}());
	uniform_real_distribution<double> dist(97.0, 123.0);
	int i,index;
	int rint = 0,count = 1;
	string temp = "";
	string word = "";
	array<string,alength> list {"aaaaa","bbb","ccc","ddd","eee","fff","ggg","hhh","iii","jjj","kkk","lll","mmm","zzzzz"};
	// print list
	//for (i = 0 ;i < = alength;i++)
	//	cout<<list[i]<<" ";
	//
	bool done = false;
	while (!done){
		// create a 5 letter word
		for (i = 0; i < 5; i++){
				rint = (int)dist(PRNG);temp = (char)rint;
				word = word + temp;
		}
		index = binary_search(list, word);
		if (index != -1) done = true;
		cout << "search index = " << index <<" word "<<word<< " count "<<count<<endl;
		count++;
		word = "";
	}
    
    return 0;
}

int binary_search(array<string,alength> blist, string search_string){
	int n = blist.size();
    //cout<< "\nList_length "<<" n "<< n <<endl;
    int s = 0;//  start of list
    int e = n - 1; // end index of the list
    int m = (s + e) / 2; // middle
	int count = 1;
    while (s <= e)
    {     cout<<" s m e count "<<s<<" , "<<m<<" , "<< e << " - "<<count<<endl;
		
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
