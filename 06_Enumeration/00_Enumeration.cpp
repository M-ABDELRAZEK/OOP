#include<iostream>
using namespace std;
/*
enum days {SAT, SUN, MON, TUE, WEN,THU, FRI};
    -- The Compiler Deals With That as The Following
    -- const int SAT = 0
    -- const int SUN = 1
    -- const int MON = 2
    -- const int TUE = 3
    -- const int WEN = 4
    -- const int THU = 5
    -- const int FRI = 6
*/
enum days {SAT = 1, SUN, MON, TUE, WEN,THU, FRI};
/*
    -- The Compiler Deals With That as The Following
    -- const int SAT = 1
    -- const int SUN = 2
    -- const int MON = 3
    -- const int TUE = 4
    -- const int WEN = 5
    -- const int THU = 6
    -- const int FRI = 7
*/

int main()
{
    string d[7] = {"SAT", "SUN", "MON", "TUE", "WEN", "THU", "FRI"};
    days m[7] ={SAT, SUN, MON, TUE, WEN,THU, FRI};
    
    for(int i = 0; i < 7; i++)
    {
        cout << m[i] << "\t" << d[i] << endl;
    }

    return 0;
}
