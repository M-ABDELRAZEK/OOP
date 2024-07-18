#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("01_a.txt");
    if(file.is_open())
        cout << "It's Open";
    else 
        cerr << "It's Close";
    file.close();
    return 0;
}