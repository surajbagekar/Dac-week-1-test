// Write a program to Multiply without using Multiplication operator (*).

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n=1, a, b;
    int m;
    
    cout << "enter the two number: ";
    cin >> a >> b;

    if (n < b)
    {
        m = m + a;
        n++;
    }
cout<<m<<endl;
    return 0;
}