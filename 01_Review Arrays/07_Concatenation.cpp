#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char s1[] = "Object ";
    char s2[] = "Oriented";

    // To Get Length of String
    cout << strlen(s1) << endl;
    cout << strlen(s2) << endl;

    cout << strcat(s1, s2) << endl;

    return 0;
}