#include<iostream>
using namespace std;

class triangle
{
    private:
        int height;
        int base;

    public:
        // Constructor (Has To Be The Same Name As The Class) ==> Done When The Object iS Created in Main()
        triangle() // Empty Constructor
        {
            cout << "First Constructor\n";
            base = 5; // initial Value
            height = 10; // initial Value
        }
        
        void setBase_Height(int b, int h)
        {
            base = b;
            height =h;
        }
        float area()
        {
            return 0.5*base*height;
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
    triangle tr1;
    tr1.print();
    cout << "=======================\n";
    tr1.setBase_Height(50, 100);
    tr1.print();
    return 0;
}