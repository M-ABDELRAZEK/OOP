#include<iostream>
using namespace std;

// To Handle More Than Data type In Function
template<class t>

t sum(t x, t y)
{
    return x + y; 
}

int main()
{
    int x = 10, y = 20;
    double f = 15.5, d = 1.3;
    
    cout << sum(x, y) << endl;
    cout << sum(f, d) << endl;
    // cout << sum(x, f) << endl;  // Error Should Be The Same Data Type
    
    return 0;
}