#include<iostream>
using namespace std;

class tri;

class rec
{
    private:
    int width, Rheight;

    public:
    void set_values(int a, int b) 
    {
        width = a;
        Rheight = b;
    }

    friend int sumArea(tri T, rec R);
};

class tri
{
    private:
    int base, Theight;

    public:
    void set_values(int a, int b)
    {
        base = a;
        Theight = b;
    }

    friend int sumArea(tri T, rec R);
};

int sumArea(tri T, rec R)
{
    return 0.5 * T.base * T.Theight + R.width * R.Rheight;
}

int main()
{
    tri T;
    rec R;

    T.set_values(10, 5);
    R.set_values(5, 5);
    
    cout << sumArea(T, R) << endl;
    return 0;
}