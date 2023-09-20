// Write a program to Print Prime Numbers between Two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the range: ";
    cin >> a >> b;

    c = 0;
    for (int n = a; n <= b; n++)
    {
        for (int i = 1; i <= n; i++)
        {

            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << a;
        }
        else
        {
            cout << "number is not prime";
        }
    }
    return 0;
}