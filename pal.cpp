#include<iostream>
using namespace std;
int main()
{
int n,a,rem,rev=0;
cin>>n;
a=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(a==rev)
{
cout<<"Number is a palindrome";
}
else
{
cout<<"Number is not a palindrome";
}
}
