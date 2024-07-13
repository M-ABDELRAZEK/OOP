#include<iostream>
using namespace std;

string da[7] = {"SAT", "SUN", "MON", "TUE", "WEN", "THU", "FRI"};
enum days {SAT = 1, SUN, MON, TUE, WEN, THU, FRI};

class week
{
    private:
        days d[7];
    public:
        void setDay(days w[])
        {
            for(int i = 0; i < 7; i++)
            {
                d[i] = w[i];
            }
        }
        void print()
        {
            for (size_t i = 0; i < 7; i++)
                cout << "The number of day " <<  da[i] << " = " << d[i] << endl;
        }

};

int main()
{
    days days[7] = {SAT, SUN, MON, TUE, WEN,THU, FRI};
    week g;
    g.setDay(days);
    g.print();

    return 0;
}