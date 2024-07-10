#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
        string name;
        int id;

    public:
        student()
        {
            cout << "Parameterized Constructor\n";
            name = "No Name";
            id = 0;
        }

        student(string n, int i = 0)
        {
            cout << "Parameterized Constructor 1 \n";
            name = n;
            id = i;
        }

        void print()
        {
            cout << "Name = " << name << endl;
            cout << "id = " << id << endl;
        }
};

int main()
{
    student st("Mohamed", 123456789);
    st.print();

    return 0;
}