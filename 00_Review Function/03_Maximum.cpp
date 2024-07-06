#include<iostream>
#include<algorithm>
using namespace std;

double maximum(double num1, double num2, double num3)
{
    double maxValue;
    num1 >= num2 ? maxValue = num1 : maxValue = num2;
    maxValue >= num3 ?  : maxValue = num3;
    return maxValue;
}

int main()
{
    cout << "Enter Three Numbers\n";
    double num1, num2,num3;
    cin >> num1 >> num2 >> num3;
    cout << maximum(num1, num2, num3);
    return 0;
}