#include<iostream>
using namespace std;

class CRectangle
{
    private:
    int *width, *height;

    public:
    CRectangle(int, int);
    ~CRectangle();
    int area()
    {
        return *width * *height;
    }
};

CRectangle::CRectangle(int a, int b)
{
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}

CRectangle::~CRectangle()
{
    delete width;
    delete height;
}

int main()
{
    CRectangle rect(3, 4), cube(5, 5);
    cout << "rect area = " << rect.area() << endl;
    cout << "cube area = " << cube.area() << endl;

    return 0;
}