#include<iostream>
using namespace std;
int main()
{
    try
    {
        int answer;
        cout << "5 + 7 = ";
        cin >> answer;
        if(answer != 12)
            throw "ERROR, Wrong Answer\n";
        cout << "GOOD, Right Answer\n";
    }
    catch (const char* str)
    {
        cout << "Exception: " << str;
    }
    return 0;
}