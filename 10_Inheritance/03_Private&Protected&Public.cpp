#include<iostream>
using namespace std;
/*
    -- Member Of The Same Class Can Access ==> (Public, Protected, Private)
    -- Member Of Derived Class Can Access ==> (Public, Protected)
    -- Not Member Of Class Can Access ==> (Public)
*/
class base
{
    private:
        int i;
    protected:
        int h;
    public:
        int j, k;

        void set_i(int x)
        {
            i = x;
        }

        int get_i()
        {
            return i;
        }
};

class derived : private base  // Inherited Private Member Only
{
    public:
    using base::j;  // Make j Public in Derived Again
    using base::set_i;  // Make set_i() Public in Derived Again
    using base::get_i;  // Make get_i() Public in Derived Again
    // base::i;  // Illegal, You Can Not Elevate Access  Because It is Private Already In The Base Class
    using base::h;  // Make j Public in Derived Again Even It is Protected
    int a;
};

int main()
{
    derived ob;
    // ob.i = 5;  // Can Not Access Pivate member Declared in Class 'A'
    ob.j = 6;  // j Is Made Public 
    // ob.k = 7;  // Became Pirvate With Respect To 'B' And Did Not Elevated Again
    ob.a = 40;  // Already Public In Derived Class
    ob.set_i(10);
    ob.h = 70;  // h Is Made Public
    cout << ob.get_i() << " ";
    cout << ob.j << " " << ob.a << ob.h << endl;

    return 0;
}