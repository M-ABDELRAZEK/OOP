#include<iostream>
using namespace std;

int main()
{
    int arr[] = {22, 55, 88, 99, 1, 0, 7};
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == n)
        {
            flag = true;
        }
    }
    if(flag)
        cout << "Found\n";
    else
        cout << "Not Found\n";
    return 0;
}