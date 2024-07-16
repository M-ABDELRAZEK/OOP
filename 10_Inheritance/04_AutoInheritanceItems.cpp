/*
    -- Constructors & Destructors
    -- Operator=() Members
    -- Friends
*/

#include<iostream>
using namespace std;

class mother
{
    public:
        mother()
        {
            cout << "Mother::Empty Constructor\n";
        }
        mother(int a)
        {
            cout << "mother::Parameterized Constructor = " << a << endl;
        }
};

class daughter : public mother
{
    public:
        daughter()
        {
            cout << "daughter::Empty Constructor\n";
        }
        daughter(int a)
        {
            cout << "daughter::Parameterized Constructor = " << a << endl;
        }
};

class son : public mother
{
    public:
        son()
        {
            cout << "son::Empty Constructor\n";
        }
        son(int a) : mother(a)
        {
            cout << "son::Parameterized Constructor = " << a << endl;
        }
};

int main()
{
    daughter sara(1);
    cout << "===================\n";
    son mohamed(6);
    return 0;
}