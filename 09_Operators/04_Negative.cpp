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
    
    Unary operator-()
    {
        x = -x;
        y = -y;
        return *this;
    }
    /*
    - The Difference Between Binary Operator & Unary Operator That 
    --- Unary ==> Does Not Take Arguments 
    --- Binary ==> Takes Arguments
    */
    void showData() {cout << x << " " << y << endl;}
};

int main()
{
    Unary x(5, -56), k;
    -x;
    x.showData();

    k = -x;
    k.showData();
    
    return 0;
}