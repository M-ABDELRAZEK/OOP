#include<iostream>
using namespace std;

class arr
{
    int a[3];
    public:
    arr()
    {
        for(int i = 0; i < 3; i++)
            a[i] = i + 2;
    }

    int &operator[](int index)
    {
        return a[index];
    }
};

int main()
{
    arr ob;
    cout << ob[2] << endl; //ob.operator[](2)
    ob[2] = 20;
    cout << ob[2] << endl; //ob.operator[](2)
    
    return 0;
}