#include<iostream>
using namespace std;

void f()
{
    static int x = 0; // Means It Is Common Between All Functions Emplemented
    x++;
    cout << x << endl;
}

void g()
{
    int x = 0; // Not The Same For Each Function Emplemented
    x++;
    cout << x << endl;
}

int main()
{
    g();
    g();
    g();
    g();
    cout << "================\n";
    f();
    f();
    f();
    f();
    
    return 0;
}