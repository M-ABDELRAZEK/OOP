/*
Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class (called a subclass or derived class)
to inherit properties and behaviors (methods) from another class (called a superclass or base class).
This mechanism promotes code reuse, as it enables new classes to be created based on existing ones,
    -- Member Of The Same Class Can Access ==> (Public, Protected, Private)
    -- Member Of Derived Class Can Access ==> (Public, Protected)
    -- Not Member Of Class Can Access ==> (Public)
*/

#include<iostream>
using namespace std;

class CPolygon
{
    protected: // Can Be Reached By Base Class and Derived Class
    int width, height;

    public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
};

class CRectangle : public CPolygon // Here copy The Properities of Class CPolygon
{
    public:
    int area()
    {
        return width * height;
    }
};

class CTriangle : public CPolygon // Here copy The Properities of Class CPolygon
{
    public:
    int area()
    {
        return width * height / 2;
    }
};

int main()
{
    CRectangle rect; // contains width, height, setValues, area
    CTriangle tri; // contains width, height, setValues, area
    rect.setValues(4, 5);
    tri.setValues(5, 10);
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    
    
    return 0;
}