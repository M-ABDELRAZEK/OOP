#include<iostream>
using namespace std;

class Student
{
    private:
        static int count;
        string name;
        int first, second, final, total, ID;
    public:
    static void print_count()
    {
        cout << "Student Constructed: " << count << endl;
    }
    Student()
    {
        name = "No Name";
        ID = 0;
        first = second = final = 0;
        count++;
        print_count();
    }

};

int Student::count = 0; // Has To Be Outside The Class Because It is Static(Common)

int main()
{
    Student::print_count();

    cout << "\nConstruct 2 Objects\n";
    Student s1, s2;
    cout << "\nConstruct 3 Objects\n";
    Student s3[3];
    
    return 0;
}