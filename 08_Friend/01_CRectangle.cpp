#include<iostream>
using namespace std;

class CRectangle
{
    int Width, Height;
    friend CRectangle duplicate(CRectangle);

    public:
    void setValues(int, int);
    int area(void)
    {
        return Width * Height;
    }
};

void CRectangle::setValues(int a, int b)
{
    Width = a;
    Height = b;
} 

CRectangle duplicate(CRectangle R)
{
    CRectangle T;
    T.Width = R.Width * 2;
    T.Height = R.Height * 2;
    return T;
}

int main()
{
    CRectangle rect, rectb;
    rect.setValues(2, 3);
    cout << "The area before duplicate = " << rect.area() << endl;
    rectb = duplicate(rect);
    cout << "The area after duplicate = " << rectb.area() << endl;
    return 0;
}
