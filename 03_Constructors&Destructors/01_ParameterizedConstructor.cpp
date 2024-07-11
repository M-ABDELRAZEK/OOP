#include<iostream>
using namespace std;

class triangle
{
    private:
        int height;
        int base;

    public:
        triangle() // Empty/Default Constructor
        {
            cout << "Empty Constructor\n";
            base = 5; // initial Value
            height = 10; // initial Value
        }
        
        triangle(int b, int h) // Parameterized Constructor
        {
            cout << "P Constructor\n";
            base = b;
            height = h;
        }

        void setBase_Height(int b, int h)
        {
            base = b;
            height = h;
        }
        float area()
        {
            return 0.5 * base * height;
        }
        void print()
        {
            cout << "base = " << base << endl;
            cout << "height = " << height << endl;
            cout << "area = " << area() << endl;
        }
};

int main()
{
    triangle tr1; // When No Parameters Emplemented Then It Calls Empty Constructor
    
    tr1.print();
    cout << "=======================\n";
    tr1.setBase_Height(50, 100);
    tr1.print();

    cout << "=======================\n";

    triangle tr2(2, 10); // When There Are Parameters Emplemented Then It Calls Parametrized Constructor
    
    tr2.print();
    cout << "=======================\n";
    tr2.setBase_Height(50, 100);
    tr2.print();

    return 0;
}