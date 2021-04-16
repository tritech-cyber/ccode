// Change line 8 so only charater 32 to 126 print
// This is c++ 
// compile: g++ asc2.cpp  or g++ asc2.cpp -o asc2.o
// run:  ./a.out
#include <iostream>
using namespace std;

int main(){
	int n;
	char c;
	for(n = 32; n < 127; n++){
		c = char(n);
		cout<< n << "=" << c << " ";
		if (n % 10 == 0)cout<<"\n";
	}

}


