#include<iostream>
using namespace std;

class Relational
{
    int x, y, z;
    public:
    Relational(int i = 0, int j = 0, int k = 0)
    {
        x = i;
        y = j;
        z = k;
    }

    bool operator==(Relational b)
    {
        return (x == b.x && y == b.y && z == b.z);
    }

};

int main()
{
    Relational a(10, 10, 10), b(10, 10, 10);
    if(a == b) //if ( a.operator==(b) )
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
        
    return 0;
}