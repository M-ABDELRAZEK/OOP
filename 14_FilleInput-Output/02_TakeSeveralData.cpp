#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("02_Sfile.txt");
    cout << "Enter The Student Status\n";
    cout << "Press Ctrl+Z To Exit\n";
    string name;
    int id;
    while(cin >> name >> id)
    {
        file << name << " " << id << endl;
    }
    return 0;
}