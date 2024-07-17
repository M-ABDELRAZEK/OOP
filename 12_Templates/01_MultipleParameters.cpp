#include<iostream>
using namespace std;

// To Handle More Than Data type In Function
template<class t1, class t2>

t1 sum(t1 x, t2 y)
{
    return x + y; 
}

int main()
{
    int x = 10, y = 20;
    double f = 15.5, d = 1.3;
    
    cout << sum(x, y) << endl;
    cout << sum(f, d) << endl;
    cout << sum(x, f) << endl;
    cout << sum<double>(x, f) << endl;

    return 0;
}