#include<iostream>
using namespace std;

void ref(int &x, int &y) // Call By Reference Because These variables Are Local To This Function
{
    x++;
    y++;
}

int main()
{
    int a = 0, b = 0;
    ref(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}