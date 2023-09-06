/*
Desired Output :
                    * * * * *
                    * * * * *
                    * * * * *
                    * * * * *
                    * * * * *

This is 5 x 5 solid square pattern output.
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of your solid square : ";
    cin >> n;

    for (int row = 0; row < n; row++)   // Outer Loop
    {
        for (int col = 0; col < n; col++)   // Inner Loop
        {
            cout << "*";
        }
        cout << endl;   // For new line
    }

    return 0;
}


/*

Follow @curious_coder_aman on instagram for more coding updates.

*/