#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance add_Distance(Distance d1, Distance d2)
{
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}

int main()
{
    Distance x, y, z;
    
    cout << "Enter Feet Values \n";
    cin >> x.feet >> y.feet;
    cout << "Enter Inches Values \n";
    cin >> x.inches >> y.inches;

    z = add_Distance(x, y);
    cout << "z.feet = " << z.feet << " z.inches = " << z.inches << endl;

    return 0;
}