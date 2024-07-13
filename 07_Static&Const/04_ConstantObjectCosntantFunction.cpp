#include<iostream>
using namespace std;

class Time
{
    private:
        int hours, minutes, seconds;
    public:
        void print() const  // Constant Function
        {
            cout << "Time = " << hours << ":" << minutes << ":" << seconds << endl;
        }

        Time(int h, int m, int s)
        {
            hours = h;
            minutes = m;
            seconds = s;
        }

};

int main()
{
    const Time noon(12, 0, 0);  // Constant Object ==> Only Can Reach Constant Functions Unlike (Static)
    noon.print();

    Time t1(6, 50, 0);  // Any Object Can Reach The Constant Function 
    t1.print();
    
    return 0;
}