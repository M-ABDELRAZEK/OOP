#include<iostream>
using namespace std;

class triangle
{
    private:
        int height;
        int base;

    public:
        void setBase_Height(float B, float H)
        {
            base = B;
            height = H;
        }

        float area()
        {
            return .5 * base * height;
        }

        void printArea()
        {
            cout << "Base = " << base << endl;
            cout << "Height = " << height << endl;
            cout << "Area = " << area() << endl;
        }
};

int main()
{
    triangle tr;
    float base, height;
    cout << "Enter The Base & The Height\n";
    cin >> base >> height;
    tr.setBase_Height(base, height);
    tr.printArea();

    return 0;
}