#include<iostream>
using namespace std;

int sum(int x, int y)
{
    cout << "Enter Two Numbers\n";
    cin >> x >> y;
    cout << "The Sum Is: " << x + y << endl;

    return x + y;
}

int main()
{
    int x, y;
    sum(x, y);
    
    return 0;
}