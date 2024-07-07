#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
    int arr[100];
    fill(begin(arr), end(arr), 10);
    cout << arr[99];
    return 0;
}