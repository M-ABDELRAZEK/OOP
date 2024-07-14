#include<iostream>
using namespace std;

// <This> Is special pointer available within class member functions. It points to the object for which the member function is called.

class stud
{
    public:
    void address()
    {
        cout << this << endl;
    }
};

int main()
{
    stud a, b, c;
    cout << "&a\t\t\t" << &a;
    cout << "\nThe Address of a\t";
    a.address();
    cout << "\n&b\t\t\t" << &b;
    cout << "\nThe Address of b\t";
    b.address();
    cout << "\n&c\t\t\t" << &c;
    cout << "\nThe Address of c\t";
    c.address();
    
    return 0;
}