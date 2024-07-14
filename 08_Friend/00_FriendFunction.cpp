#include<iostream>
using namespace std;

class myclass
{
    int a, b;
    
    public:
        myclass(int i, int j)
        {
            a = i;
            b = j;
        }
        friend int sum(myclass ob); // To Let Any Function Can Reach The Private Members
};

int sum(myclass ob)
{
    return ob.a + ob.b;
}

int main()
{
    myclass o(10, 20);
    cout << sum(o) << endl;

    return 0;
}