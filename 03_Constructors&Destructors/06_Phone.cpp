#include<iostream>
using namespace std;

class Phone
{
    private:
        string name;
        string model;
        int prize;
    public:

        Phone(){}

        Phone(string n, string m, int p)
        {
            name = n;
            model = m;
            prize = p;
        }

        void print(); // Prototype of The Function
        ~Phone();
};

Phone::~Phone()
{
    cout << "Object Destructed\n";
}

void Phone::print() // The Empelementaion Of The Function Outside The Class
{
    cout << "Name = " << name << endl;
    cout << "model = " << model << endl;
    cout << "prize = " << prize << endl;
}

int main()
{
    Phone ob, ob1("OPPO", "Reno 10 PRO", 400);
    ob1.print();
    return 0;
}