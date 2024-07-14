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

    void add(triangle c1, triangle c2) // For Adding Two Objects And Storing It In New Object
    {
        base = c1.base + c2.base;
        height = c1.height + c2.height;
    }
};

int main()
{
    triangle c1, c2(3.5, 1.5), c3;
    c1.getData();
    
    // c3 = c1 + c2;
    c3.add(c1, c2);
    
    c3.showData();

    return 0;
}