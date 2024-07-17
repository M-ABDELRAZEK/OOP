#include<iostream>
using namespace std;

template<class T>
class number
{
    T first, second;
    public:
    number(T a, T b)
    {
        first = a;
        second = b;
    }

    T max();
};

template<class T>
T number<T>::max()
{
    return first > second ? first : second;
}

int main()
{
    number<double>ob(10, 20.5);
    cout << ob.max() << endl;
    return 0;
}