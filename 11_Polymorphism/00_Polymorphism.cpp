/*
polymorphism is a core concept that allows objects of different classes to be treated as objects of a common superclass.
It enables a single interface to represent different underlying forms (data types).
*/

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
    CPolygon *ptr1, *ptr2;  // Create Pointers From The Base Class
    ptr1 = &rect;
    ptr2 = &tri;
    ptr1->setValues(4, 5);
    ptr2->setValues(4, 5);
    // cout << ptr1->area() << endl;  // Error ==> The Function Area() Must Be In Base Class 
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    
    return 0;
}