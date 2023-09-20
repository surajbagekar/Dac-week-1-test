// Write a program to print EVEN numbers from 1 to N using a while loop.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the range: ";
    cin >> a >> b;


    for (int n = a; n <= b; n++)
    {
        if (n % 2 == 0)
        {
        cout << n << endl;
        }
        else
        {
        continue;    
        }
    }

        return 0;
    }