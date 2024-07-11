#include<iostream>
using namespace std;

class copyCon
{
    private:
        int a1, a2, a3, a4, a5, a6, a7, a8, a9;
        
    public:
        // Parameterized Constructor
        copyCon(int aa1, int aa2, int aa3, int aa4, int aa5, int aa6, int aa7, int aa8, int aa9)
        {
            a1 = aa1;
            a2 = aa2;
            a3 = aa3;
            a4 = aa4;
            a5 = aa5;
            a6 = aa6;
            a7 = aa7;
            a8 = aa8;
            a9 = aa9;
        }

        // Copy Constructor
        copyCon(const copyCon &a)
        {
            a1 = a.a1;
            a2 = a.a2;
            a3 = a.a3;
            a4 = a.a4;
            a5 = a.a5;
            a6 = a.a6;
            a7 = a.a7;
            a8 = a.a8;
            a9 = a.a9;
        }

        void p()
        {
            cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << " " << a7 << " " << a8 << " " << a9 << " " << endl;
        }
};

int main()
{
    copyCon g(1, 2, 3, 4, 5, 6, 7, 8, 9); // Parametrized Constructor
    g.p();

    copyCon h(g); // Copy Constructor
    h.p();

    return 0;
}