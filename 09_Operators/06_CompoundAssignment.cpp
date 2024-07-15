#include<iostream>
using namespace std;

class Unary
{
    int x, y;
    public:
    Unary(int i, int j)
    {
        x = i;
        y = j;
    }

    Unary operator+=(Unary b2)
    {
        x += b2.x;
        y += b2.y;
        return *this;
    }

    void showData() {cout << x << " " << y << endl;}
};

int main()
{
    Unary b(1, 2), b2(3, 3);
    b.showData();
    b += b2; // b.operator(b2)
    b.showData();

    return 0;
}