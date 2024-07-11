#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        string name;
        int ID;
    public:
    Student()
    {
        cout << "Object Created\n";
    }

    ~Student()
    {
        cout << "Object Destructed\n";
    }

    void Set_Name_ID(string n, int id)
    {
        name = n;
        ID = id;
    }

    void print()
    {
        cout << name << "\t" << ID << endl;
    }
};

void F(Student s)
{
    Student s1;
    s1 = s;
    s.Set_Name_ID("MOHAMED", 123456789);
    s.print();
    s1.print();
}

int main()
{
    Student st1, st2;
    st1.Set_Name_ID("AHMED", 1111111);
    st2.Set_Name_ID("ALI", 2222222);
    
    cout << "Going To Funtion\n";
    F(st1);
    cout << "Goint From Function\n";
    st1.print();
    return 0;
}