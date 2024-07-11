#include<iostream>
using namespace std;

struct Car
{
    // Attributes
    string name;
    string color;
    int maxSpeed;
    int model;
};


int main()
{
    Car g = {"Kia", "Red", 250, 96}, k = {"Bugatti", "Black", 330, 2024};
    if(g.model < k.model)
    {
        cout << "g is Less Than k\n"; 
    }
    return 0;
}