#include <iostream>
#include <array>
#include <string>
using namespace std;

int binary_search(array<string,13> blist, string search_string);

int main(){
	int i;
	array<string,13> list {"aaa","bbb","ccc","ddd","eee","fff","ggg","hhh","iii","jjj","kkk","lll","mmm"};
	// print list
	for (i = 0 ; i < 13;i++){
		cout<<list[i]<<" ";
	}
    string search_string = "jjj";
	int index = binary_search(list, search_string);
	
	cout << "\nResult  " << index << endl;
 
    
    return 0;
}

int binary_search(array<string,13> blist, string search_string){
	//int n = 0;
	int n = blist.size();
    cout<< "\nList_length "<<" n "<< n <<endl;
    int p = 0;//  start of list
    int r = n - 1; // end index of the list
    int q = (r + p) / 2; // middle

    while (p <= r)
    {    if (blist[q] == search_string)
            return q;
        else
        { if (blist[q] < search_string) 
            { p = q + 1;
              q = (r + p) / 2;
            }
            else
            {  r = q - 1;
               q = (r + p) / 2;    
            }
        }
    }
    return -1;
}
`

// https://gist.github.com/rcanepa/fc29c00c4185c4a13b54
