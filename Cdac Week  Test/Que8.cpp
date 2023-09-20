// Write a program to find second largest number in an array.
#include <iostream>
using namespace std;
int main()
{
    int a[3] = {10, 118, 8};
    if (a[0] > a[1])
    {
        if (a[0] > a[2])
        {
            cout << "The greater number is: " << a[0];
        }
        else
        {
            cout << "The greater number is: " << a[2];
        }
        }
        else
        {
            if (a[1] > a[2])
            {
                cout << "The greater number is: " << a[1];
            }
            else
            {
                cout << "The greater number is: " << a[2];
            }
        }

    return 0;
}