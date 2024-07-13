#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int ID;

    public:
        Student()
        {
            cout << "empty\n";
            name = "No Name";
            ID = 0;
        }
        Student(string N, int id)
        {
            cout << "Parameterized\n";
            name = N;
            ID = id;
        }

        void set(string N, int id) 
        {
            name = N;
            ID = id;
        }
        void print()
        {
            cout << name << "\t" << ID << endl;
        }
};

int main()
{
    Student s1("Ali", 123), s2("Ahmed", 456);
    Student arr[3]; // Every Element In The Array Has Name And ID

    for(int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    cout << "===================\n";

    Student arr1[3] = {Student("Adel", 1450), Student("Mohamed", 123321), Student("Abdelrazek", 2003)}; // Every Element In The Array Has Name And ID

    for(int i = 0; i < 3; i++)
    {
        arr1[i].print();
    }

    cout << "===================\n";

    // Updating array elements with new values
    arr[0].set("Adel", 1450);
    arr[1].set("Mohamed", 123321);
    arr[2].set("Abdelrazek", 2003);

    for (int i = 0; i < 3; i++) {
        arr[i].print();
    }

    cout << "===================\n";

    Student arr2[3] = {s1, s2}; // Every Element In The Array Has Name And ID

    for(int i = 0; i < 3; i++)
    {
        arr1[i].print();
    }

    return 0;
}