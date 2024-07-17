/*
is a mechanism in programming that allows a program to handle runtime errors or exceptional conditions in a controlled manner.
It ensures that the program can deal with unexpected events gracefully, without crashing or producing incorrect results.

try {
        // Code that might throw an exception
        throw SomeExceptionType("Error message");
    }
catch( ExceptionName e1 )  {
        // catch block catches the exception that is thrown from try block
    }
*/

#include<iostream>
using namespace std;

int main()
{
    int hour;
    cin.exceptions(cin.failbit);  // It Is better For Predicting Errors
    try
    {
        cin >> hour;
        if(hour < 0)
            throw "Error:";
        cout << "The Time Is " << hour << ":00\n";
    }
    catch(const char* e)
    {
        cerr << e << " Wrong Value\n";
    }

    return 0;
}

/*
- cout (Standard Output Stream)
--- Usage: cout is used to output data to the standard output, typically the console.
--- Buffering: cout is buffered, which means that the output is stored in a buffer and only flushed (i.e., actually outputted) at certain points, such as when the buffer is full, when a newline is encountered, or when cout.flush() is called.
--- Purpose: It is generally used for normal program output, such as displaying results or general information.

- cerr (Standard Error Stream)
--- Usage: cerr is used to output error messages to the standard error stream, typically the console.
--- Buffering: cerr is unbuffered, which means that the output is immediately flushed to the console. This ensures that error messages are displayed as soon as they are produced, which is useful for debugging and error reporting.
--- Purpose: It is used specifically for error messages and diagnostic information.
*/