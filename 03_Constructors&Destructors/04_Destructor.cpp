#include<iostream>
using namespace std;

/*
    -- Destructor (Has To Be The Same Name As The Class)
    -- Always Tilde (~) Comes Before Destructor Name
    -- Every Class Has One Destructor Can't Be More 
    -- There is No Types of Destructors
    -- Clears The Memory From The Object Unlike The Constructor
    -- Delete Obkects From The Last One 
    -- Emplemeted in The End of The Scope
*/

class Rectangle
{
    int width, height; // If Private is Not Written The Compiler Takes The Private By Default
    public:
        Rectangle(int W, int H): width(W), height(H) // Constructor
        {
            cout << "A Rectangle Has Been Created\n";
        }

        ~Rectangle() // Destructor
        {
            cout << width << " " << height << " A Rectangle Has Been Deleted\n";
        }
};

int main()
{
    Rectangle R1(3, 4), R2(5, 6);


    return 0; // Call The Destructor
}