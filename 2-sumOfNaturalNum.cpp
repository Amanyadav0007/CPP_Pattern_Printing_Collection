// Here we try to learn how to print sum of given natural number.

#include<iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Ente a number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    cout << "Total : " << sum;
    
    return 0;
}