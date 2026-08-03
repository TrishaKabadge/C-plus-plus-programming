#include<iostream>
using namespace std;
int main()
{
int a,b,choice;
cout<<"Enter a:";
cin>>a;
cout<<"Enter b:";
cin>>b;
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divivsion";
cin>>choice;

switch(choice)
{
case 1:
cout<<"Addition="<<a+b;
break;
case 2:
cout<<"Subtraction="<<a-b;
break;
case 3:
cout<<"Multiplication="<<a*b;
break;
case 4:
if(b!=0)
cout<<"Divisin="<<(float)a/b;
else
cout<<"Divison is not possible";
break;
default:
cout<<"Invalid choice";
}
return 0;
}
