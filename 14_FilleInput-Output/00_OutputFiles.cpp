/*
-IOS
--- The ios class is the parent class in the hierarchy and both the (istream and ostream) classes inherit from it.
These two classes together form the ios class, which is the highest level of the entire C++ stream class hierarchy.
*/

#include<iostream>
#include<fstream>  // File Steram
using namespace std;

int main()
{
    ofstream moFile;
    moFile.open("00_mo.txt");    
    moFile << "MOHAMED ABDERLAZEK\n";
    moFile.close();  // When You Finish Editing This File

    ofstream pyFile("D:\\OOP\\14_FilleInput-Output\\00_print.py");
    pyFile << "print(\"Hello OOP\")\n";
    pyFile.close();


    return 0;
}