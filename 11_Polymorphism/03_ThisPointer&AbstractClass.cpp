#include<iostream>
using namespace std;

class CPolygon
{
    protected:
    int width, height;
    public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }

    virtual int area(void) = 0;  // Pure Virtual
    void printarea(void)
    {
        cout << this->area() << endl;
    }

};

class CRectangle : public CPolygon
{
    public:
    int area(void)
    {
        return width * height;
    }
};

class Ctriangle : public CPolygon
{
    public:
    int area(void)
    {
        return .5 * width * height;
    }
};

int main()
{
    Ctriangle tri;
    CRectangle rect;
    // Create Pointers From The Base Class
    CPolygon *ptr1 = &rect, *ptr2 = &tri;  // Early Binding 

    ptr1->setValues(4, 5);
    ptr2->setValues(4, 5);
    
    cout << ptr1->area() << endl;  // From CRectangle (4 * 5)
    cout << ptr2->area() << endl;  // From CTriangle (0.5 * 4 * 5)
    ptr1->printarea();  // (4 * 5)
    ptr1->printarea();  // (0.5 * 4 * 5
    
    cout << "===============\n";

    CPolygon *ptr[2] = {&rect, &tri};
    for(int i = 0; i < 2; i++)
    {
        cout << ptr[i]->area() << endl; // Late Binding
        ptr[i]->printarea();
    }
    
    return 0;
}
/*
- Early Binding (Static Binding)
--- Refers To The Compile-Time Determination of Which Method or Function To Call.
- Late Binding (Dynamic Binding)
--- Refers To The Runtime Determination of Which Method or Function To Call.
*/