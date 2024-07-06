#include<iostream>
using namespace std;

void avg(double m1, double m2, double m3)
{
    cout << "Enter Three Marks\n";
    cin >> m1 >> m2 >> m3;
    double avg = (m1 + m2 + m3) / 3;
    cout << avg << endl;
}
int main()
{
    double m1, m2, m3;
    avg(m1, m2, m3);
    return 0;
}