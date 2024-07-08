#include<iostream>
using namespace std;

class car
{
    private:    // Define Attributes || Only Defined in Class Scope (Can not Be Modified in Another Functions)
        string name;
        string color;
        int maxSpeed;
        int model;

    public:    // Relate Between Attributes By Functions
        void setName(string n)
        {
            name = n;
        }

        void setColor(string n)
        {
            color = n;
        }

        void setMaxSpeed(int n)
        {
            maxSpeed = n;
        }

        void setModel(int n)
        {
            model = n;
        }

        string getName()
        {
            return name;
        }

        string getColor()
        {
            return color;
        }

        int getMaxSpeed()
        {
            return maxSpeed;
        }

        int getModel()
        {
            return model;
        }

        void print()
        {
            cout << "Name = " << name << endl;
            cout << "Color = " << color << endl;
            cout << "Max Speed = " << maxSpeed << endl;
            cout << "Model = " << model << endl;
        }
};

int main()
{
    car x;   // Object Called x From car Class
    x.setName("KIA");
    x.setColor("RED");
    x.setMaxSpeed(300);
    x.setModel(2015);
    x.print();

    return 0;
}