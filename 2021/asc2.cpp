// Change line 8 so only charater 32 to 126 print
#include <iostream>
using namespace std;

int main(){
	int n;
	char c;
	for(n = 0; n < 256; n++){
		c = char(n);
		cout<< n << "=" << c << " ";
		if (n % 10 == 0)cout<<"\n";
	}

}


