#include<iostream>
using namespace std;

struct Exam
{
    float first;
    float second;
    float final;
    void str()
    {
        cout << "\nStruct\n\n";
    }
};

class Subject
{
    private:
        string name;
        Exam exam;
    public:
        Subject()
        {
            name = "No Name";
            exam = {0, 0, 0};
        }
        Subject(string n, float f1, float f2, float f3)
        {
            exam.str();
            name = n;
            exam = {f1, f2, f3};
        }

        float total()
        {
            return exam.first + exam.second + exam.final;
        }

        void print()
        {
            cout << "The subject = " << name << endl;
            cout << "First Exam = " << exam.first << endl;
            cout << "Second Exam = " << exam.second << endl;
            cout << "Final Exam = " << exam.final << endl;
            cout << "The Total is = " << total() << endl;
        }
};

int main()
{
    string sub;
    float f1, f2, f3;

    cout << "Enter The Subject Name\n";
    cin >> sub;
    
    cout << "Enter The Three Exams Degrees\n";
    cin >> f1 >> f2 >> f3;

    Subject ob(sub, f1, f2, f3);
    ob.print();

    return 0;
}
