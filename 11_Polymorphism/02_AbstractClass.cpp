#include<iostream>
using namespace std;

/*
If Class Has Pure Vitual Function called Abstract Class.
You Can Not Declare Objects From The Abstract Class.
You Can Only Declare Pointers From It.
*/
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
    // CPolygon poly;  // Error Because It Is Abstract Class
    CPolygon *ptr1, *ptr2;  // Create Pointers From The Base Class
    ptr1 = &rect;
    ptr2 = &tri;

    ptr1->setValues(4, 5);
    ptr2->setValues(4, 5);
    
    cout << ptr1->area() << endl;  // From CRectangle (4 * 5)
    cout << ptr2->area() << endl;  // From CTriangle (0.5 * 4 * 5)
    
    return 0;
}