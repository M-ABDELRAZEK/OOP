#include<iostream>
using namespace std;

class name
{
    string n;
    protected:
    void setName(string N)
    {
        n = N;
    }
    void printName()
    {
        cout << n << endl;
    }
};

class ID
{
    int id;
    protected:
    void setID(int N)
    {
        id = N;
    }
    void printID()
    {
        cout << id << endl;
    }
    
};

class Student : public name, public ID
{
    public:
    Student(string N, int Id)
    {
        setName(N);
        setID(Id);
    }
    void print()
    {
        printName();
        printID();
    }
};

int main()
{
    Student st("Khaled", 123456789);
    st.print();
    return 0;
}