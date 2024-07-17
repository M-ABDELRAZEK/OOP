#include<iostream>
using namespace std;

class CException
{
    int array[100];
    public:
    CException()
    {
        for(int i = 0; i < 100; i++)
        {
            array[i] = i;
        }
    }
    int getElement(int x)
    {
        if(x >= 100)
            throw xBig();
        else if(x < 0)
            throw xSmall();
        else 
            return array[x];
    }
    class xBig
    {
        public:
        xBig(){}
        void Big()
        {
            cout << "Big" << endl;
        }
    };
    class xSmall
    {
        public:
        xSmall(){}
        void Small()
        {
            cout << "Small" << endl;
        }
    };
};

int main()
{
    int i = 0;
    CException a;
    try
    {
        cout << "Choose Element\n";
        cin >> i;
        cout << "The Element:\t" << a.getElement(i) << endl;
    }
    catch(CException::xBig B)
    {
        B.Big();
    }
    catch(CException::xSmall S)
    {
        S.Small();
    }
    return 0;
}
