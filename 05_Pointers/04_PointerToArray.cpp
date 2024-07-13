#include<iostream>
using namespace std;

int main()
{
    short int arr[5] = {10, 50, 40, 77, 33};
    short int *p = arr; // *p = &arr[0]

    cout << "Address of First Element " << p << endl;
    cout << "First Element " << *p << endl;

    cout << "Address of Second Element " << p + 1 << endl;
    cout << "Second Element " << *(p + 1) << endl;

    p += 2; // Can Not Do ( arr += 2)

    cout << "Address of Third Element " << p << endl;
    cout << "Third Element " << *p << endl;

    p -= 2;
    for (size_t i = 0; i < 5; i++)
    {
        cout << *p << endl;
        p++;
    }

    return 0;
}