// Here I try to print square pattern.

#include <iostream>
using namespace std;
int main()

{
    int size;

    cout << "Enter the size of the square : ";
    cin >> size;

    // Outer loop
    for (int i = 0; i < size; i++)
    {
        // Inner loop
        for (int j = 0; j < size; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }



    int row, column;

    cout << "Please enter your row : ";
    cin >> row;

    cout << "Please enter your column : ";
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }


    return 0;
}