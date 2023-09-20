// 13. Write a program by using switch case if user enter 11 it will have are area of circle and
// when user enter 22 it will have area of rectangle and when user enter 33 it will give area
// of square when user enter 44 it will give area of triangle.

#include <iostream>
using namespace std;
int main()
{
    int r = 2, i = 3, l = 4, h=8, b = 5, s = 6, areaR, areaS;
    float areaC, areaT;
    cout << "enter the choice between 11,22,33,44: ";
    cin >> i;

    switch (i)
    {
    case 11:

        areaC = 2 * 3.14 * r;
        cout << "Area of circle is " << areaC << endl;
        break;
    case 22:
        areaR = l * b;
        cout << "Area of rectangle is " << areaR << endl;
        break;
    case 33:
        areaS = s * s;
        cout << "Area of square is " << areaS << endl;
        break;
    case 44:
        areaT = b * h / 2;
        cout << "Area of triangle is " << areaT << endl;
        break;

    default:
        cout << "Enter the month number between 1 to 12" << endl;
        break;
    }

    return 0;
}