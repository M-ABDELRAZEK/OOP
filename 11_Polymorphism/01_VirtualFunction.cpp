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

    virtual int area(void)  // This Means It Is Already Declared In Base Function So It Can Be Reached By The Pointer From Any Class
    {
        return 0;
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
    CPolygon poly;
    CPolygon *ptr1, *ptr2, *ptr3;  // Create Pointers From The Base Class
    ptr1 = &rect;
    ptr2 = &tri;
    ptr3 = &poly;
    ptr1->setValues(4, 5);
    ptr2->setValues(4, 5);
    ptr3->setValues(4, 50);
    cout << ptr1->area() << endl;  // From CRectangle (4 * 5)
    cout << ptr2->area() << endl;  // From CTriangle (0.5 * 4 * 5)
    cout << ptr3->area() << endl;  // From CPolygon (0)
    
    return 0;
}