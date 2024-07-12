#include<iostream>
using namespace std;


int main()
{
    int var1 = 11;
    int var2 = 22;
    float var3 = 33.55;
    cout << &var1 << endl;
    cout << &var2 << endl;

    int *ptr;
    float *ptr1 = &var3;
    void *ptr2 = &var1;
    ptr = &var2;

    *ptr = 5000;

    cout << *ptr << endl;
    cout << var2 << endl;
    cout << ptr << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;
    cout << *(int *) ptr2 << endl;

    return 0;
}
