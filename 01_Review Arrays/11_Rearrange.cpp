#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int main()
{
    int arr[] = {22, 55, 88, 99, 1, 0, 7};

    sort(arr, arr + sizeof(arr) / sizeof(int));
    for(size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << "index " << i << " = " << arr[i] << endl;
    }

    cout << " ====================================== \n";

    reverse(arr, arr + sizeof(arr) / sizeof(int));
    for(size_t i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << "index " << i << " = " << arr[i] << endl;
    }

    return 0;
}