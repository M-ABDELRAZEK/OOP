#include<iostream>
using namespace std;

class number 
{
    int num;

    public:
    number()
    {
        num = 0;
    }
    number(int x)
    {
        num = x;
    }
    number(const number &ob)
    {
        num = ob.num;
    }
    int getNum()
    {
        return num;
    }
    operator int()
    {
        return int(num);
    }
};

int main()
{
    number ob(20);
    int x = 10;
    x = ob;
    cout << x << endl;
    return 0;
}