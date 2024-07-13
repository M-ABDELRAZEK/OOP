#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 50, 40, 77, 33};
    cout << "Address of First Element " << arr << endl;
    cout << "First Element " << *arr << endl;
    cout << "Address of Second Element " << arr + 1 << endl;
    cout << "Second Element " << *(arr + 1) << endl;
    
    for (size_t i = 0; i < 5; i++)
    {
        cout<< (arr + i) << endl;
    }

    return 0;}