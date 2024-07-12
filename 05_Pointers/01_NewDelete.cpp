#include<iostream>
using namespace std;

int main()
{
    int *p;
    p = new int; // Allocate memory for an integer on the heap

    *p = 10;
    *p = 10;
    cout << "Location of Pointer " << &p << endl; // Location of Pointer
    cout << "Memory Location " << p << endl;
    cout << "Contain " << *p << endl;

    // Deallocate the dynamically allocated memory
    delete p;

    return 0;
}