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
    void showData() {cout << x << " " << y << endl;}
    
    // For Postfix 
    void operator++(int) // Int Here Means It is Decleration For Postfix
    {
        x++;
        y++;
    }
    // For Prefix 
    void operator++()
    {
        ++x;
        ++y;
    }
};

int main()
{
    Unary v(10, 20);
    v++;
    v.showData();
    ++v;
    v.showData();
    
    return 0;
}