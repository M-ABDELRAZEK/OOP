#include<iostream>
using namespace std;
int main()
{
    try
    {
        int A[10] = {2, 3, 4, 1, 3, 5, 6, 8, 9};
        int index;
        cout << "Enter Index: ";
        cin >> index;
        if(index < 0)
            throw "Error, Negative Index\n";
        if(index >= 10)
            throw index;
        for(int i = 0; i <= index; i++)
            cout << A[i] << " ";
    }

    catch(const char* str)
    {
        cout << "Exception: " << str;
    }
    
    catch(const int n)
    {
        cout << "Exception: ";
        cout << "Index " << n << " Is Out of Range";
    }

    return 0;
}