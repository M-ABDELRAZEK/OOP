#include<iostream>
using namespace std;

class Rectangle
{
    int width, height; // If Private is Not Written The Compiler Takes The Private By Default
    public:

        Rectangle(): width(0), height(0)
        {
            cout << "Width = " << width << " height = " << height << endl;
        }

        Rectangle(int W, int H): width(W), height(H) // Constructor
        {
            cout << "Width = " << width << " height = " << height << endl;
            Rectangle R;
        }

        ~Rectangle() // Destructor
        {
            cout << width << " " << height << " A Rectangle Has Been Deleted\n";
        }
};

int main()
{
    Rectangle R1(3, 4), R2(5, 6);


    return 0; // Call The Destructor For R1 & R2
}