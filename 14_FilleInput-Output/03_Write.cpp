#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int arr[10];
    int j = 0;
    for(int i = 0; i < 10; i++)
    {
        j = i * 10;
        arr[i] = j;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    ofstream fout("03_test.txt", ios::binary);  // This causes the file to be accessed as a binary file Due To The Variation Of Data Types
    fout.write((char*)&arr, sizeof(arr)); // To Save This In Text File And Reread It Later
    // fout.write(reinterpret_cast<char*>(arr), 10 * sizeof(int));
    fout.close();
    return 0;
}