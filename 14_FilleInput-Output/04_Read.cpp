#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int arr[20];
    int i = 0;
    ifstream fin("03_test.txt", ios::binary);
    fin.read((char*)&arr, 10 * sizeof(int));
    for(i = 10; i < 20; i++)
        arr[i] = i * 10; 
    
    for(i = 0; i < 20; i++)
        cout << arr[i] << endl; 
    
    fin.close();
    
    ofstream fout("04_test.txt", ios::binary);
    fout.write((char*)&arr, 20 * sizeof(int));
    fout.close();
    return 0;
}