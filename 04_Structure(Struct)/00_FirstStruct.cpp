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
    Car g;
    g.name = "Kia";
    g.color = "Red";
    g.maxSpeed = 200;
    g.model = 2021;
    
    cout << g.name << endl;
    cout << g.color << endl;
    cout << g.model << endl;
    cout << g.maxSpeed << endl;
    return 0;
}