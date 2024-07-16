#include<iostream>
using namespace std;
/*
    -- Member Of The Same Class Can Access ==> (Public, Protected, Private)
    -- Member Of Derived Class Can Access ==> (Public, Protected)
    -- Not Member Of Class Can Access ==> (Public)
*/
class A
{
    private:
        int i;
    protected:
        int j;
    public:
        int k;
};

class B : public A  // Inherite Public Members
{
    int x;
    public:
        int y;
        int get_i()
        {
            // return i;  // Can Not Access Pivate member Declared in Class 'A'
        }
        int get_j()
        {
            return j;
        }
        int get_k()
        {
            return k;
        }
};

int main()
{
    B ob;
    // ob.i = 5;  // Can Not Access Pivate member Declared in Class 'A'
    // ob.j = 6;  // Can Not Access Protected member Declared in Class 'A'
    ob.k = 7;
    // ob.x = 8;  // Can Not Access Pivate member Declared in Class 'B'
    ob.y = 9;
    
    return 0;
}