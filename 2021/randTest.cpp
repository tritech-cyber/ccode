#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

int main() 
{ 
    srand((unsigned)time(0)); 
    float i;
    i = rand()*1000000; 
    cout << i << "\n"; 
}
