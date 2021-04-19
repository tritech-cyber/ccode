#include <iostream>
#include <random>
using namespace std;
int main()
{
   // https://en.cppreference.com/w/cpp/numeric/random/random_device
   default_random_engine PRNG(random_device {}());
   uniform_real_distribution<double> dist(97.0, 123.0);

   const int nSimulations { 127 };
	int rint = 0;
	string temp = "";
	string sum = "";
	for (int i { 1 }; i <= nSimulations; i++)
   { 
	   rint = (int)dist(PRNG);
	   temp = (char)rint;
	   cout << rint<< " "<<temp<<" ";
	   sum = sum + temp;
      if (i % 13 == 0) cout << '\n';
   }
   cout << '\n'<<sum<<'\n';
}
