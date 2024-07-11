#include<iostream>
using namespace std;

struct Car
{
    // Attributes
    string name;
    string color;
    int maxSpeed;
    int model;
}k; // Decleration of k


int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;

    k = {"Bugatti", "Black", 330, 2024};

    Car g = {"Kia", "Red", 250, 2017};
    cout << g.maxSpeed << endl; // Reaches The Value By The Name of the Attribute Not index
    cout << k.name << endl;
    
    return 0;
}