#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char name[8] = {'M', 'O', 'H', 'A', 'M', 'E', 'D', '\0'};
    cout << name << endl; 
    
    char name2[7];
    cin >> name2; //// setw limits the input to 6 characters + null terminator
    cout << name2 << endl;

    char name3[10];
    cin.ignore();
    cin.getline(name3, 10, '$');
    cout << name3 << endl;

    return 0;
}