#include<iostream>
using namespace std;

int mul(int x, int y = 5) // default argument
{
    cout << "Enter a Number\n";
    cin >> x;
    cout << "The multiplication Is: " << x * y << endl;

    return x + y;
}

int main()
{
    int x, y;
    mul(x); // = x * 5
    return 0;
}