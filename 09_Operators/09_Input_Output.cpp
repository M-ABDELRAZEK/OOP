#include<iostream>
using namespace std;

class Distance
{
    private:
    int feet;
    int inches;

    public:
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }
    friend istream &operator>>(istream &input, Distance &D);

    friend ostream &operator<<(ostream &output, Distance &D)
    {
        output << "(" << D.feet << ", " << D.inches << ")" << endl;
        return output;
    }
};

istream &operator>>(istream &input, Distance &D)
{
    input >> D.feet >> D.inches;
    return input;
}

int main()
{
    Distance D1(11, 10), D2(5,11), D3;
    cin >> D3; // D3
    cout << D3; 
    return 0;
}