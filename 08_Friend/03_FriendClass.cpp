#include<iostream>
using namespace std;

class CSquare;
class CRectangle {
        int width, height;
    public:
        int area(void)
        {
            return (width * height);
        }
        void convert(CSquare);
};

class CSquare
{
    int side;

    public:
    void setSide(int x)
    {
        side = x;
    }

    friend class CRectangle; // To Let CRectangle Reach objects From CSquare
};

void CRectangle::convert(CSquare S)
{
    width = S.side;
    height = S.side;
}

int main()
{
    CSquare sqr;
    CRectangle rect;
    sqr.setSide(3);
    rect.convert(sqr);
    cout << rect.area() <<endl;
    return 0;
}