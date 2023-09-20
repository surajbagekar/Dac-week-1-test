//11. Write a program to Calculate Product of Digits of a Number.

#include<iostream>
using namespace std;
int main()
{
int n, m;
int product=1;
cout<<"Enter the number: ";
cin>>n;

while(n!=0){
    m = n%10;
    product =n;
    n= n/10;

}
   cout<<product<<endl;
return 0;
}