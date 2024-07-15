#include<iostream>
using namespace std;

class Unary 
{
    int x, y;
    public:
    Unary(int i = 0, int j = 0)
    {
        x = i;
        y = j;
    }
    
    // Prefix
    Unary operator++()
    {
        ++x;
        ++y;
        return *this;
    }
    
    // Postfix
    Unary operator++(int)
    {
        x++;
        y++;
        return *this;
    }
    
    void showData() {cout << x << " " << y << endl;}
};

int main()
{
    Unary v(10, 20), k;
    k = ++v;
    k.showData();
    v++;
    v.showData();

    return 0;
}