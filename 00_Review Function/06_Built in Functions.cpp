#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int x = 10, y = 20;
    // some examples from cmath library
    cout << pow(2, 5) << endl;
    cout << sqrt(9) << endl;
    cout << ceil(10.5) << endl;
    cout << floor(10.5) << endl;
    
    // some examples from algorithm library
    cout << max(10, 20) << endl;
    cout << min(10, 20) << endl;
    swap(x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
} 