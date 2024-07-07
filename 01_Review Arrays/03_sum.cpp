#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
    int arr[7];
    
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    
    return 0;
}