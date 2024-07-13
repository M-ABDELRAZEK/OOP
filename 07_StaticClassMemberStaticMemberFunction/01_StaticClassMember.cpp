#include<iostream>
using namespace std;

class Student
{
    private:
        static int count;
        string name;
        int first, second, final, total, ID;
    public:
    Student()
    {
        name = "No Name";
        ID = 0;
        first = second = final = 0;
        count++;
        cout << "Numbers Of Students Constructed: " << count << endl;
    }

};

int Student::count = 0; // Has To Be Outside The Class Because It is Static(Common)

int main()
{
    cout << "\nConstruct 2 Objects\n";
    Student s1, s2;
    cout << "\nConstruct 3 Objects\n";
    Student s3[3];
    
    return 0;
}