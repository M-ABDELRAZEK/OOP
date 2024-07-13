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
        void print()
        {
            cout << name << "\t" << ID << endl;
        }
};

int main()
{
    Student s1("Ali", 123), s2("Ahmed", 456);
    Student arr[3] = {s1, s2};
    Student *ptr;
    ptr = arr;

    for(int i = 0; i < 3; i++)
    {
        (ptr + i)->print(); // (->) Is used For Pointers
    }
    for(int i = 0; i < 3; i++)
    {
        ptr++->print();
    }
    

    return 0;
}