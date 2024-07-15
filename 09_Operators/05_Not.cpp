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

    bool operator!()
    {
        return (x == 0 && y == 0);
    }

    void showData() {cout << x << " " << y << endl;}
};

int main()
{
    Unary x(5, 6);
    if(!x)
        cout << "Ture\n";
    else
        cout << "False\n";
        
    return 0;
}