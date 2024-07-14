#include<iostream>
using namespace std;

class triangle
{
    float base, height;

    public:
    triangle(float a = 0, float b = 0)
    {
        base = a;
        height = b;
    }

    void getData()
    {
        cout << "Enter The Base \n";
        cin >> base;
        cout << "Enter The Height \n";
        cin >> height;
    }

    void showData()
    {
        cout << "Base & Height = (" << base << ", " << height << ")" << endl;
    }

    triangle add(triangle c2) // For Adding Two Objects And Storing It In New Object
    {
        triangle c3;
        c3.base = base + c2.base;
        c3.height = height + c2.height;
        return c3;
    }

    triangle operator-(triangle c2) // Overloading the - operator (Binary Operator Overloading)
    {
        triangle c3;
        c3.base = base - c2.base;
        c3.height = height - c2.height;
        return c3;
    }

    triangle operator*(triangle c2) // Overloading the * operator (Binary Operator Overloading)
    {
        triangle c3;
        c3.base = base * c2.base;
        c3.height = height * c2.height;
        return c3;
    }
};

int main()
{
    triangle c1, c2(3.5, 1.5), c3;
    c1.getData();
    
    // c3 = c1 + c2;
    c3 = c1.add(c2);
    
    c3.showData();

    c3 = c1 - c2; // c3 = c1.operator-(c2)
    c3.showData();
    
    c3 = c1 * c2; // c3 = c1.operator*(c2)
    c3.showData();
    
    return 0;
}