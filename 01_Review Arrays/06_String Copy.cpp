#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[15] = "C++ Vs Java";
    char s2[15];
    strcpy(s2, s1);
    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}