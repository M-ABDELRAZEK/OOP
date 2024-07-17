#include<iostream>
using namespace std;

template<class T>
class A_char
{
    public:
    A_char(T x)
    {
        cout << x << " is Not  Character\n";
    }
};

template<> // Template Specialization
class A_char<char>  // Only Call This Class If The Object is Char
{
    public:
    A_char(char x)
    {
        cout << x << " is Not  Character\n";
    }
};

int main()
{
    A_char ch1(1);
    A_char ch2(1.5);
    A_char ch3('A');
    
    return 0;
}